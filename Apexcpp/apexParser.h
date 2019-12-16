
// Generated from apex.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  apexParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    T__74 = 75, T__75 = 76, T__76 = 77, T__77 = 78, T__78 = 79, T__79 = 80, 
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, T__84 = 85, T__85 = 86, 
    T__86 = 87, T__87 = 88, T__88 = 89, T__89 = 90, T__90 = 91, T__91 = 92, 
    T__92 = 93, Identifier = 94, Whitespace = 95, Newline = 96, BlockComment = 97, 
    LineComment = 98
  };

  enum {
    RuleTranslationUnit = 0, RuleShaderBlock = 1, RuleShaderBlockContents = 2, 
    RulePassBlock = 3, RulePass = 4, RulePassBlockContents = 5, RuleCodeBlock = 6, 
    RuleCode = 7, RuleCodeBlockContents = 8, RuleInterfaceBlock = 9, RuleInterfacetype = 10, 
    RuleInterfaceContent = 11, RuleInterfaceVariableDecl = 12, RuleConstantBufferBlock = 13, 
    RuleConstantBuffer = 14, RuleConstantBufferContents = 15, RuleVariableDecl = 16, 
    RuleLocationSemantics = 17, RuleBuiltinSemantic = 18, RuleBuiltinTypes = 19
  };

  apexParser(antlr4::TokenStream *input);
  ~apexParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class TranslationUnitContext;
  class ShaderBlockContext;
  class ShaderBlockContentsContext;
  class PassBlockContext;
  class PassContext;
  class PassBlockContentsContext;
  class CodeBlockContext;
  class CodeContext;
  class CodeBlockContentsContext;
  class InterfaceBlockContext;
  class InterfacetypeContext;
  class InterfaceContentContext;
  class InterfaceVariableDeclContext;
  class ConstantBufferBlockContext;
  class ConstantBufferContext;
  class ConstantBufferContentsContext;
  class VariableDeclContext;
  class LocationSemanticsContext;
  class BuiltinSemanticContext;
  class BuiltinTypesContext; 

  class  TranslationUnitContext : public antlr4::ParserRuleContext {
  public:
    TranslationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShaderBlockContext *shaderBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TranslationUnitContext* translationUnit();

  class  ShaderBlockContext : public antlr4::ParserRuleContext {
  public:
    ShaderBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    ShaderBlockContentsContext *shaderBlockContents();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShaderBlockContext* shaderBlock();

  class  ShaderBlockContentsContext : public antlr4::ParserRuleContext {
  public:
    ShaderBlockContentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PassBlockContext *> passBlock();
    PassBlockContext* passBlock(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShaderBlockContentsContext* shaderBlockContents();

  class  PassBlockContext : public antlr4::ParserRuleContext {
  public:
    PassBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PassContext *pass();
    antlr4::tree::TerminalNode *Identifier();
    PassBlockContentsContext *passBlockContents();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PassBlockContext* passBlock();

  class  PassContext : public antlr4::ParserRuleContext {
  public:
    PassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PassContext* pass();

  class  PassBlockContentsContext : public antlr4::ParserRuleContext {
  public:
    PassBlockContentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodeBlockContext *codeBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PassBlockContentsContext* passBlockContents();

  class  CodeBlockContext : public antlr4::ParserRuleContext {
  public:
    CodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodeContext *code();
    CodeBlockContentsContext *codeBlockContents();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeBlockContext* codeBlock();

  class  CodeContext : public antlr4::ParserRuleContext {
  public:
    CodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeContext* code();

  class  CodeBlockContentsContext : public antlr4::ParserRuleContext {
  public:
    CodeBlockContentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InterfaceBlockContext *> interfaceBlock();
    InterfaceBlockContext* interfaceBlock(size_t i);
    std::vector<ConstantBufferBlockContext *> constantBufferBlock();
    ConstantBufferBlockContext* constantBufferBlock(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeBlockContentsContext* codeBlockContents();

  class  InterfaceBlockContext : public antlr4::ParserRuleContext {
  public:
    InterfaceBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfacetypeContext *interfacetype();
    antlr4::tree::TerminalNode *Identifier();
    InterfaceContentContext *interfaceContent();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceBlockContext* interfaceBlock();

  class  InterfacetypeContext : public antlr4::ParserRuleContext {
  public:
    InterfacetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfacetypeContext* interfacetype();

  class  InterfaceContentContext : public antlr4::ParserRuleContext {
  public:
    InterfaceContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InterfaceVariableDeclContext *> interfaceVariableDecl();
    InterfaceVariableDeclContext* interfaceVariableDecl(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceContentContext* interfaceContent();

  class  InterfaceVariableDeclContext : public antlr4::ParserRuleContext {
  public:
    InterfaceVariableDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclContext *variableDecl();
    LocationSemanticsContext *locationSemantics();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceVariableDeclContext* interfaceVariableDecl();

  class  ConstantBufferBlockContext : public antlr4::ParserRuleContext {
  public:
    ConstantBufferBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantBufferContext *constantBuffer();
    antlr4::tree::TerminalNode *Identifier();
    ConstantBufferContentsContext *constantBufferContents();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantBufferBlockContext* constantBufferBlock();

  class  ConstantBufferContext : public antlr4::ParserRuleContext {
  public:
    ConstantBufferContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantBufferContext* constantBuffer();

  class  ConstantBufferContentsContext : public antlr4::ParserRuleContext {
  public:
    ConstantBufferContentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableDeclContext *> variableDecl();
    VariableDeclContext* variableDecl(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantBufferContentsContext* constantBufferContents();

  class  VariableDeclContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BuiltinTypesContext *builtinTypes();
    antlr4::tree::TerminalNode *Identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclContext* variableDecl();

  class  LocationSemanticsContext : public antlr4::ParserRuleContext {
  public:
    LocationSemanticsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BuiltinSemanticContext *builtinSemantic();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocationSemanticsContext* locationSemantics();

  class  BuiltinSemanticContext : public antlr4::ParserRuleContext {
  public:
    BuiltinSemanticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BuiltinSemanticContext* builtinSemantic();

  class  BuiltinTypesContext : public antlr4::ParserRuleContext {
  public:
    BuiltinTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BuiltinTypesContext* builtinTypes();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

