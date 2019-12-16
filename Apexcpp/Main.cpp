#include <iostream>

#include "antlr4-runtime.h"
#include "apexLexer.h"
#include "apexParser.h"
#include "apexBaseVisitor.h"

#include <string>

class VariableDeclarations
{
	public:
		std::string type;
		std::string name;
		std::string location;
};

class InterfaceBlockContents
{
	public:
		std::vector<VariableDeclarations*> variables;
};

class InterfaceBlock
{
	public:
		std::string name;
		InterfaceBlockContents* contents;
};

class CodeBlockContents
{
	public:
		std::vector<InterfaceBlock*> interfaces;
};

class CodeBlock
{
	public:
		CodeBlockContents* contents;
};

class PassBlockContents
{
	public:
		CodeBlock* code;
};

class PassBlock
{
	public:
		PassBlockContents* contents;
};

class ShaderBlockContents
{
	public:
		std::vector<PassBlock*> passes;
};

class ShaderBlock
{
	public:
		std::string name;
		ShaderBlockContents* contents;
};

class TranslationUnit
{
	public:
		ShaderBlock* shader;
};

class ApexVisitor final : public apexBaseVisitor
{
	public:
		antlrcpp::Any visitTranslationUnit(apexParser::TranslationUnitContext* context) override
		{
			auto result = visitShaderBlock(context->shaderBlock());
			ShaderBlock* shader = result.as<ShaderBlock*>();
			unit = new TranslationUnit();
			unit->shader = shader;

			return antlrcpp::Any(unit);
		}

		antlrcpp::Any visitShaderBlock(apexParser::ShaderBlockContext* context) override
		{
			auto result = visitShaderBlockContents(context->shaderBlockContents());
			ShaderBlockContents* contents = result.as<ShaderBlockContents*>();

			ShaderBlock* shader = new ShaderBlock();
			shader->name = context->Identifier()->getText();
			shader->contents = contents;

			return antlrcpp::Any(shader);
		}

		antlrcpp::Any visitShaderBlockContents(apexParser::ShaderBlockContentsContext* context) override
		{
			ShaderBlockContents* contents = new ShaderBlockContents();
			for(auto pass : context->passBlock())
			{
				auto result = visitPassBlock(pass);
				PassBlock* passBlock = result.as<PassBlock*>();

				contents->passes.push_back(passBlock);
			}

			return antlrcpp::Any(contents);
		}

		antlrcpp::Any visitPassBlock(apexParser::PassBlockContext* context) override
		{
			auto result = visitPassBlockContents(context->passBlockContents());
			PassBlockContents* content = result.as<PassBlockContents*>();

			PassBlock* passBlock = new PassBlock();
			passBlock->contents = content;

			return antlrcpp::Any(passBlock);
		}

		antlrcpp::Any visitPassBlockContents(apexParser::PassBlockContentsContext* context) override
		{
			auto result = visitCodeBlock(context->codeBlock());
			CodeBlock* codeBlock = result.as<CodeBlock*>();

			PassBlockContents* passBlockContents = new PassBlockContents();
			passBlockContents->code = codeBlock;

			return antlrcpp::Any(passBlockContents);
		}

		antlrcpp::Any visitCodeBlock(apexParser::CodeBlockContext* context) override
		{
			auto result = visitCodeBlockContents(context->codeBlockContents());
			CodeBlockContents* contents = result.as<CodeBlockContents*>();

			CodeBlock* code = new CodeBlock();
			code->contents = contents;

			return antlrcpp::Any(code);
		}

		antlrcpp::Any visitCodeBlockContents(apexParser::CodeBlockContentsContext* context) override
		{
			CodeBlockContents* contents = new CodeBlockContents();
			for (auto inter : context->interfaceBlock())
			{
				auto result = visitInterfaceBlock(inter);
				InterfaceBlock* block = result.as<InterfaceBlock*>();

				contents->interfaces.push_back(block);
			}

			return antlrcpp::Any(contents);
		}

		antlrcpp::Any visitInterfaceBlock(apexParser::InterfaceBlockContext* context) override
		{
			auto result = visitInterfaceContent(context->interfaceContent());
			InterfaceBlockContents* contents = result.as<InterfaceBlockContents*>();

			InterfaceBlock* block = new InterfaceBlock();
			block->contents = contents;
			block->name = context->Identifier()->getText();

			return antlrcpp::Any(block);
		}

		antlrcpp::Any visitInterfaceContent(apexParser::InterfaceContentContext* context) override
		{
			InterfaceBlockContents* contents = new InterfaceBlockContents();
			for (auto var : context->interfaceVariableDecl())
			{
				auto result = visitInterfaceVariableDecl(var);
				VariableDeclarations* decl = result.as<VariableDeclarations*>();

				contents->variables.push_back(decl);
			}

			return antlrcpp::Any(contents);
		}

		antlrcpp::Any visitInterfaceVariableDecl(apexParser::InterfaceVariableDeclContext* context) override
		{
			VariableDeclarations* var = new VariableDeclarations();
			var->name = context->variableDecl()->Identifier()->getText();
			var->type = context->variableDecl()->builtinTypes()->getText();

			if(context->locationSemantics() != nullptr)
			{
				var->location = context->locationSemantics()->builtinSemantic()->getText();
			}

			return antlrcpp::Any(var);
		}

		TranslationUnit* unit;
};

int main()
{
	std::ifstream stream;
	stream.open("testshader.apex");
	antlr4::ANTLRInputStream input(stream);
	apexLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	apexParser parser(&tokens);

	auto* tree = parser.translationUnit();

	ApexVisitor* visitor = new ApexVisitor();
	auto val = visitor->visitTranslationUnit(tree);

	std::cout << visitor->unit->shader->name << std::endl;
	return 0;
}