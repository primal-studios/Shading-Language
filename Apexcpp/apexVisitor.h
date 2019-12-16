
// Generated from apex.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "apexParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by apexParser.
 */
class  apexVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by apexParser.
   */
    virtual antlrcpp::Any visitTranslationUnit(apexParser::TranslationUnitContext *context) = 0;

    virtual antlrcpp::Any visitShaderBlock(apexParser::ShaderBlockContext *context) = 0;

    virtual antlrcpp::Any visitShaderBlockContents(apexParser::ShaderBlockContentsContext *context) = 0;

    virtual antlrcpp::Any visitPassBlock(apexParser::PassBlockContext *context) = 0;

    virtual antlrcpp::Any visitPass(apexParser::PassContext *context) = 0;

    virtual antlrcpp::Any visitPassBlockContents(apexParser::PassBlockContentsContext *context) = 0;

    virtual antlrcpp::Any visitCodeBlock(apexParser::CodeBlockContext *context) = 0;

    virtual antlrcpp::Any visitCode(apexParser::CodeContext *context) = 0;

    virtual antlrcpp::Any visitCodeBlockContents(apexParser::CodeBlockContentsContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceBlock(apexParser::InterfaceBlockContext *context) = 0;

    virtual antlrcpp::Any visitInterfacetype(apexParser::InterfacetypeContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceContent(apexParser::InterfaceContentContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceVariableDecl(apexParser::InterfaceVariableDeclContext *context) = 0;

    virtual antlrcpp::Any visitConstantBufferBlock(apexParser::ConstantBufferBlockContext *context) = 0;

    virtual antlrcpp::Any visitConstantBuffer(apexParser::ConstantBufferContext *context) = 0;

    virtual antlrcpp::Any visitConstantBufferContents(apexParser::ConstantBufferContentsContext *context) = 0;

    virtual antlrcpp::Any visitVariableDecl(apexParser::VariableDeclContext *context) = 0;

    virtual antlrcpp::Any visitLocationSemantics(apexParser::LocationSemanticsContext *context) = 0;

    virtual antlrcpp::Any visitBuiltinSemantic(apexParser::BuiltinSemanticContext *context) = 0;

    virtual antlrcpp::Any visitBuiltinTypes(apexParser::BuiltinTypesContext *context) = 0;


};

