#include <iostream>

#include "antlr4-runtime.h"
#include "apexLexer.h"
#include "apexParser.h"
#include "apexBaseVisitor.h"

class TUVisitor : public apexBaseVisitor
{
	public:
		antlrcpp::Any visitTranslationUnit(apexParser::TranslationUnitContext* context) override
		{
			std::cout << context->toString() << std::endl;

			return visitChildren(context);
		}
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

	TUVisitor* visitor = new TUVisitor();
	visitor->visitTranslationUnit(tree);

	return 0;
}