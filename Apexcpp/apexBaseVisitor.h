
// Generated from apex.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "apexVisitor.h"


/**
 * This class provides an empty implementation of apexVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  apexBaseVisitor : public apexVisitor {
public:

  virtual antlrcpp::Any visitTranslationUnit(apexParser::TranslationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShaderBlock(apexParser::ShaderBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShaderBlockContents(apexParser::ShaderBlockContentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPassBlock(apexParser::PassBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPass(apexParser::PassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPassBlockContents(apexParser::PassBlockContentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCodeBlock(apexParser::CodeBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCode(apexParser::CodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCodeBlockContents(apexParser::CodeBlockContentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceBlock(apexParser::InterfaceBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfacetype(apexParser::InterfacetypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceContent(apexParser::InterfaceContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceVariableDecl(apexParser::InterfaceVariableDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantBufferBlock(apexParser::ConstantBufferBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantBuffer(apexParser::ConstantBufferContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantBufferContents(apexParser::ConstantBufferContentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDecl(apexParser::VariableDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocationSemantics(apexParser::LocationSemanticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBuiltinSemantic(apexParser::BuiltinSemanticContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBuiltinTypes(apexParser::BuiltinTypesContext *ctx) override {
    return visitChildren(ctx);
  }


};

