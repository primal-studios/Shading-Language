
// Generated from apex.g4 by ANTLR 4.7.2


#include "apexVisitor.h"

#include "apexParser.h"


using namespace antlrcpp;
using namespace antlr4;

apexParser::apexParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

apexParser::~apexParser() {
  delete _interpreter;
}

std::string apexParser::getGrammarFileName() const {
  return "apex.g4";
}

const std::vector<std::string>& apexParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& apexParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TranslationUnitContext ------------------------------------------------------------------

apexParser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

apexParser::ShaderBlockContext* apexParser::TranslationUnitContext::shaderBlock() {
  return getRuleContext<apexParser::ShaderBlockContext>(0);
}


size_t apexParser::TranslationUnitContext::getRuleIndex() const {
  return apexParser::RuleTranslationUnit;
}


antlrcpp::Any apexParser::TranslationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitTranslationUnit(this);
  else
    return visitor->visitChildren(this);
}

apexParser::TranslationUnitContext* apexParser::translationUnit() {
  TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, apexParser::RuleTranslationUnit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    shaderBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShaderBlockContext ------------------------------------------------------------------

apexParser::ShaderBlockContext::ShaderBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* apexParser::ShaderBlockContext::Identifier() {
  return getToken(apexParser::Identifier, 0);
}

apexParser::ShaderBlockContentsContext* apexParser::ShaderBlockContext::shaderBlockContents() {
  return getRuleContext<apexParser::ShaderBlockContentsContext>(0);
}


size_t apexParser::ShaderBlockContext::getRuleIndex() const {
  return apexParser::RuleShaderBlock;
}


antlrcpp::Any apexParser::ShaderBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitShaderBlock(this);
  else
    return visitor->visitChildren(this);
}

apexParser::ShaderBlockContext* apexParser::shaderBlock() {
  ShaderBlockContext *_localctx = _tracker.createInstance<ShaderBlockContext>(_ctx, getState());
  enterRule(_localctx, 2, apexParser::RuleShaderBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(apexParser::T__0);
    setState(43);
    match(apexParser::Identifier);
    setState(44);
    match(apexParser::T__1);
    setState(45);
    shaderBlockContents();
    setState(46);
    match(apexParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShaderBlockContentsContext ------------------------------------------------------------------

apexParser::ShaderBlockContentsContext::ShaderBlockContentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<apexParser::PassBlockContext *> apexParser::ShaderBlockContentsContext::passBlock() {
  return getRuleContexts<apexParser::PassBlockContext>();
}

apexParser::PassBlockContext* apexParser::ShaderBlockContentsContext::passBlock(size_t i) {
  return getRuleContext<apexParser::PassBlockContext>(i);
}


size_t apexParser::ShaderBlockContentsContext::getRuleIndex() const {
  return apexParser::RuleShaderBlockContents;
}


antlrcpp::Any apexParser::ShaderBlockContentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitShaderBlockContents(this);
  else
    return visitor->visitChildren(this);
}

apexParser::ShaderBlockContentsContext* apexParser::shaderBlockContents() {
  ShaderBlockContentsContext *_localctx = _tracker.createInstance<ShaderBlockContentsContext>(_ctx, getState());
  enterRule(_localctx, 4, apexParser::RuleShaderBlockContents);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(48);
      passBlock();
      setState(51); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == apexParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PassBlockContext ------------------------------------------------------------------

apexParser::PassBlockContext::PassBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

apexParser::PassContext* apexParser::PassBlockContext::pass() {
  return getRuleContext<apexParser::PassContext>(0);
}

tree::TerminalNode* apexParser::PassBlockContext::Identifier() {
  return getToken(apexParser::Identifier, 0);
}

apexParser::PassBlockContentsContext* apexParser::PassBlockContext::passBlockContents() {
  return getRuleContext<apexParser::PassBlockContentsContext>(0);
}


size_t apexParser::PassBlockContext::getRuleIndex() const {
  return apexParser::RulePassBlock;
}


antlrcpp::Any apexParser::PassBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitPassBlock(this);
  else
    return visitor->visitChildren(this);
}

apexParser::PassBlockContext* apexParser::passBlock() {
  PassBlockContext *_localctx = _tracker.createInstance<PassBlockContext>(_ctx, getState());
  enterRule(_localctx, 6, apexParser::RulePassBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    pass();
    setState(55);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == apexParser::Identifier) {
      setState(54);
      match(apexParser::Identifier);
    }
    setState(57);
    match(apexParser::T__1);
    setState(59);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == apexParser::T__4) {
      setState(58);
      passBlockContents();
    }
    setState(61);
    match(apexParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PassContext ------------------------------------------------------------------

apexParser::PassContext::PassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t apexParser::PassContext::getRuleIndex() const {
  return apexParser::RulePass;
}


antlrcpp::Any apexParser::PassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitPass(this);
  else
    return visitor->visitChildren(this);
}

apexParser::PassContext* apexParser::pass() {
  PassContext *_localctx = _tracker.createInstance<PassContext>(_ctx, getState());
  enterRule(_localctx, 8, apexParser::RulePass);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(apexParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PassBlockContentsContext ------------------------------------------------------------------

apexParser::PassBlockContentsContext::PassBlockContentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

apexParser::CodeBlockContext* apexParser::PassBlockContentsContext::codeBlock() {
  return getRuleContext<apexParser::CodeBlockContext>(0);
}


size_t apexParser::PassBlockContentsContext::getRuleIndex() const {
  return apexParser::RulePassBlockContents;
}


antlrcpp::Any apexParser::PassBlockContentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitPassBlockContents(this);
  else
    return visitor->visitChildren(this);
}

apexParser::PassBlockContentsContext* apexParser::passBlockContents() {
  PassBlockContentsContext *_localctx = _tracker.createInstance<PassBlockContentsContext>(_ctx, getState());
  enterRule(_localctx, 10, apexParser::RulePassBlockContents);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeBlockContext ------------------------------------------------------------------

apexParser::CodeBlockContext::CodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

apexParser::CodeContext* apexParser::CodeBlockContext::code() {
  return getRuleContext<apexParser::CodeContext>(0);
}

apexParser::CodeBlockContentsContext* apexParser::CodeBlockContext::codeBlockContents() {
  return getRuleContext<apexParser::CodeBlockContentsContext>(0);
}


size_t apexParser::CodeBlockContext::getRuleIndex() const {
  return apexParser::RuleCodeBlock;
}


antlrcpp::Any apexParser::CodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitCodeBlock(this);
  else
    return visitor->visitChildren(this);
}

apexParser::CodeBlockContext* apexParser::codeBlock() {
  CodeBlockContext *_localctx = _tracker.createInstance<CodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 12, apexParser::RuleCodeBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    code();
    setState(68);
    match(apexParser::T__1);
    setState(70);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == apexParser::T__5

    || _la == apexParser::T__7) {
      setState(69);
      codeBlockContents();
    }
    setState(72);
    match(apexParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeContext ------------------------------------------------------------------

apexParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t apexParser::CodeContext::getRuleIndex() const {
  return apexParser::RuleCode;
}


antlrcpp::Any apexParser::CodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitCode(this);
  else
    return visitor->visitChildren(this);
}

apexParser::CodeContext* apexParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 14, apexParser::RuleCode);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(apexParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeBlockContentsContext ------------------------------------------------------------------

apexParser::CodeBlockContentsContext::CodeBlockContentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<apexParser::InterfaceBlockContext *> apexParser::CodeBlockContentsContext::interfaceBlock() {
  return getRuleContexts<apexParser::InterfaceBlockContext>();
}

apexParser::InterfaceBlockContext* apexParser::CodeBlockContentsContext::interfaceBlock(size_t i) {
  return getRuleContext<apexParser::InterfaceBlockContext>(i);
}

std::vector<apexParser::ConstantBufferBlockContext *> apexParser::CodeBlockContentsContext::constantBufferBlock() {
  return getRuleContexts<apexParser::ConstantBufferBlockContext>();
}

apexParser::ConstantBufferBlockContext* apexParser::CodeBlockContentsContext::constantBufferBlock(size_t i) {
  return getRuleContext<apexParser::ConstantBufferBlockContext>(i);
}


size_t apexParser::CodeBlockContentsContext::getRuleIndex() const {
  return apexParser::RuleCodeBlockContents;
}


antlrcpp::Any apexParser::CodeBlockContentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitCodeBlockContents(this);
  else
    return visitor->visitChildren(this);
}

apexParser::CodeBlockContentsContext* apexParser::codeBlockContents() {
  CodeBlockContentsContext *_localctx = _tracker.createInstance<CodeBlockContentsContext>(_ctx, getState());
  enterRule(_localctx, 16, apexParser::RuleCodeBlockContents);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(78);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case apexParser::T__5: {
          setState(76);
          interfaceBlock();
          break;
        }

        case apexParser::T__7: {
          setState(77);
          constantBufferBlock();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(80); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == apexParser::T__5

    || _la == apexParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceBlockContext ------------------------------------------------------------------

apexParser::InterfaceBlockContext::InterfaceBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

apexParser::InterfacetypeContext* apexParser::InterfaceBlockContext::interfacetype() {
  return getRuleContext<apexParser::InterfacetypeContext>(0);
}

tree::TerminalNode* apexParser::InterfaceBlockContext::Identifier() {
  return getToken(apexParser::Identifier, 0);
}

apexParser::InterfaceContentContext* apexParser::InterfaceBlockContext::interfaceContent() {
  return getRuleContext<apexParser::InterfaceContentContext>(0);
}


size_t apexParser::InterfaceBlockContext::getRuleIndex() const {
  return apexParser::RuleInterfaceBlock;
}


antlrcpp::Any apexParser::InterfaceBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitInterfaceBlock(this);
  else
    return visitor->visitChildren(this);
}

apexParser::InterfaceBlockContext* apexParser::interfaceBlock() {
  InterfaceBlockContext *_localctx = _tracker.createInstance<InterfaceBlockContext>(_ctx, getState());
  enterRule(_localctx, 18, apexParser::RuleInterfaceBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    interfacetype();
    setState(83);
    match(apexParser::Identifier);
    setState(84);
    match(apexParser::T__1);
    setState(86);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << apexParser::T__15)
      | (1ULL << apexParser::T__16)
      | (1ULL << apexParser::T__17)
      | (1ULL << apexParser::T__18)
      | (1ULL << apexParser::T__19)
      | (1ULL << apexParser::T__20)
      | (1ULL << apexParser::T__21)
      | (1ULL << apexParser::T__22)
      | (1ULL << apexParser::T__23)
      | (1ULL << apexParser::T__24)
      | (1ULL << apexParser::T__25)
      | (1ULL << apexParser::T__26)
      | (1ULL << apexParser::T__27)
      | (1ULL << apexParser::T__28)
      | (1ULL << apexParser::T__29)
      | (1ULL << apexParser::T__30)
      | (1ULL << apexParser::T__31)
      | (1ULL << apexParser::T__32)
      | (1ULL << apexParser::T__33)
      | (1ULL << apexParser::T__34)
      | (1ULL << apexParser::T__35)
      | (1ULL << apexParser::T__36)
      | (1ULL << apexParser::T__37)
      | (1ULL << apexParser::T__38)
      | (1ULL << apexParser::T__39)
      | (1ULL << apexParser::T__40)
      | (1ULL << apexParser::T__41)
      | (1ULL << apexParser::T__42)
      | (1ULL << apexParser::T__43)
      | (1ULL << apexParser::T__44)
      | (1ULL << apexParser::T__45)
      | (1ULL << apexParser::T__46)
      | (1ULL << apexParser::T__47)
      | (1ULL << apexParser::T__48)
      | (1ULL << apexParser::T__49)
      | (1ULL << apexParser::T__50)
      | (1ULL << apexParser::T__51)
      | (1ULL << apexParser::T__52)
      | (1ULL << apexParser::T__53)
      | (1ULL << apexParser::T__54)
      | (1ULL << apexParser::T__55)
      | (1ULL << apexParser::T__56)
      | (1ULL << apexParser::T__57)
      | (1ULL << apexParser::T__58)
      | (1ULL << apexParser::T__59)
      | (1ULL << apexParser::T__60)
      | (1ULL << apexParser::T__61)
      | (1ULL << apexParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (apexParser::T__63 - 64))
      | (1ULL << (apexParser::T__64 - 64))
      | (1ULL << (apexParser::T__65 - 64))
      | (1ULL << (apexParser::T__66 - 64))
      | (1ULL << (apexParser::T__67 - 64))
      | (1ULL << (apexParser::T__68 - 64))
      | (1ULL << (apexParser::T__69 - 64))
      | (1ULL << (apexParser::T__70 - 64))
      | (1ULL << (apexParser::T__71 - 64))
      | (1ULL << (apexParser::T__72 - 64))
      | (1ULL << (apexParser::T__73 - 64))
      | (1ULL << (apexParser::T__74 - 64))
      | (1ULL << (apexParser::T__75 - 64))
      | (1ULL << (apexParser::T__76 - 64))
      | (1ULL << (apexParser::T__77 - 64))
      | (1ULL << (apexParser::T__78 - 64))
      | (1ULL << (apexParser::T__79 - 64))
      | (1ULL << (apexParser::T__80 - 64))
      | (1ULL << (apexParser::T__81 - 64))
      | (1ULL << (apexParser::T__82 - 64))
      | (1ULL << (apexParser::T__83 - 64))
      | (1ULL << (apexParser::T__84 - 64))
      | (1ULL << (apexParser::T__85 - 64))
      | (1ULL << (apexParser::T__86 - 64))
      | (1ULL << (apexParser::T__87 - 64))
      | (1ULL << (apexParser::T__88 - 64))
      | (1ULL << (apexParser::T__89 - 64))
      | (1ULL << (apexParser::T__90 - 64))
      | (1ULL << (apexParser::T__91 - 64))
      | (1ULL << (apexParser::T__92 - 64)))) != 0)) {
      setState(85);
      interfaceContent();
    }
    setState(88);
    match(apexParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfacetypeContext ------------------------------------------------------------------

apexParser::InterfacetypeContext::InterfacetypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t apexParser::InterfacetypeContext::getRuleIndex() const {
  return apexParser::RuleInterfacetype;
}


antlrcpp::Any apexParser::InterfacetypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitInterfacetype(this);
  else
    return visitor->visitChildren(this);
}

apexParser::InterfacetypeContext* apexParser::interfacetype() {
  InterfacetypeContext *_localctx = _tracker.createInstance<InterfacetypeContext>(_ctx, getState());
  enterRule(_localctx, 20, apexParser::RuleInterfacetype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(apexParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceContentContext ------------------------------------------------------------------

apexParser::InterfaceContentContext::InterfaceContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<apexParser::InterfaceVariableDeclContext *> apexParser::InterfaceContentContext::interfaceVariableDecl() {
  return getRuleContexts<apexParser::InterfaceVariableDeclContext>();
}

apexParser::InterfaceVariableDeclContext* apexParser::InterfaceContentContext::interfaceVariableDecl(size_t i) {
  return getRuleContext<apexParser::InterfaceVariableDeclContext>(i);
}


size_t apexParser::InterfaceContentContext::getRuleIndex() const {
  return apexParser::RuleInterfaceContent;
}


antlrcpp::Any apexParser::InterfaceContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitInterfaceContent(this);
  else
    return visitor->visitChildren(this);
}

apexParser::InterfaceContentContext* apexParser::interfaceContent() {
  InterfaceContentContext *_localctx = _tracker.createInstance<InterfaceContentContext>(_ctx, getState());
  enterRule(_localctx, 22, apexParser::RuleInterfaceContent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(92);
      interfaceVariableDecl();
      setState(95); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << apexParser::T__15)
      | (1ULL << apexParser::T__16)
      | (1ULL << apexParser::T__17)
      | (1ULL << apexParser::T__18)
      | (1ULL << apexParser::T__19)
      | (1ULL << apexParser::T__20)
      | (1ULL << apexParser::T__21)
      | (1ULL << apexParser::T__22)
      | (1ULL << apexParser::T__23)
      | (1ULL << apexParser::T__24)
      | (1ULL << apexParser::T__25)
      | (1ULL << apexParser::T__26)
      | (1ULL << apexParser::T__27)
      | (1ULL << apexParser::T__28)
      | (1ULL << apexParser::T__29)
      | (1ULL << apexParser::T__30)
      | (1ULL << apexParser::T__31)
      | (1ULL << apexParser::T__32)
      | (1ULL << apexParser::T__33)
      | (1ULL << apexParser::T__34)
      | (1ULL << apexParser::T__35)
      | (1ULL << apexParser::T__36)
      | (1ULL << apexParser::T__37)
      | (1ULL << apexParser::T__38)
      | (1ULL << apexParser::T__39)
      | (1ULL << apexParser::T__40)
      | (1ULL << apexParser::T__41)
      | (1ULL << apexParser::T__42)
      | (1ULL << apexParser::T__43)
      | (1ULL << apexParser::T__44)
      | (1ULL << apexParser::T__45)
      | (1ULL << apexParser::T__46)
      | (1ULL << apexParser::T__47)
      | (1ULL << apexParser::T__48)
      | (1ULL << apexParser::T__49)
      | (1ULL << apexParser::T__50)
      | (1ULL << apexParser::T__51)
      | (1ULL << apexParser::T__52)
      | (1ULL << apexParser::T__53)
      | (1ULL << apexParser::T__54)
      | (1ULL << apexParser::T__55)
      | (1ULL << apexParser::T__56)
      | (1ULL << apexParser::T__57)
      | (1ULL << apexParser::T__58)
      | (1ULL << apexParser::T__59)
      | (1ULL << apexParser::T__60)
      | (1ULL << apexParser::T__61)
      | (1ULL << apexParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (apexParser::T__63 - 64))
      | (1ULL << (apexParser::T__64 - 64))
      | (1ULL << (apexParser::T__65 - 64))
      | (1ULL << (apexParser::T__66 - 64))
      | (1ULL << (apexParser::T__67 - 64))
      | (1ULL << (apexParser::T__68 - 64))
      | (1ULL << (apexParser::T__69 - 64))
      | (1ULL << (apexParser::T__70 - 64))
      | (1ULL << (apexParser::T__71 - 64))
      | (1ULL << (apexParser::T__72 - 64))
      | (1ULL << (apexParser::T__73 - 64))
      | (1ULL << (apexParser::T__74 - 64))
      | (1ULL << (apexParser::T__75 - 64))
      | (1ULL << (apexParser::T__76 - 64))
      | (1ULL << (apexParser::T__77 - 64))
      | (1ULL << (apexParser::T__78 - 64))
      | (1ULL << (apexParser::T__79 - 64))
      | (1ULL << (apexParser::T__80 - 64))
      | (1ULL << (apexParser::T__81 - 64))
      | (1ULL << (apexParser::T__82 - 64))
      | (1ULL << (apexParser::T__83 - 64))
      | (1ULL << (apexParser::T__84 - 64))
      | (1ULL << (apexParser::T__85 - 64))
      | (1ULL << (apexParser::T__86 - 64))
      | (1ULL << (apexParser::T__87 - 64))
      | (1ULL << (apexParser::T__88 - 64))
      | (1ULL << (apexParser::T__89 - 64))
      | (1ULL << (apexParser::T__90 - 64))
      | (1ULL << (apexParser::T__91 - 64))
      | (1ULL << (apexParser::T__92 - 64)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceVariableDeclContext ------------------------------------------------------------------

apexParser::InterfaceVariableDeclContext::InterfaceVariableDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

apexParser::VariableDeclContext* apexParser::InterfaceVariableDeclContext::variableDecl() {
  return getRuleContext<apexParser::VariableDeclContext>(0);
}

apexParser::LocationSemanticsContext* apexParser::InterfaceVariableDeclContext::locationSemantics() {
  return getRuleContext<apexParser::LocationSemanticsContext>(0);
}


size_t apexParser::InterfaceVariableDeclContext::getRuleIndex() const {
  return apexParser::RuleInterfaceVariableDecl;
}


antlrcpp::Any apexParser::InterfaceVariableDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitInterfaceVariableDecl(this);
  else
    return visitor->visitChildren(this);
}

apexParser::InterfaceVariableDeclContext* apexParser::interfaceVariableDecl() {
  InterfaceVariableDeclContext *_localctx = _tracker.createInstance<InterfaceVariableDeclContext>(_ctx, getState());
  enterRule(_localctx, 24, apexParser::RuleInterfaceVariableDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    variableDecl();
    setState(99);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == apexParser::T__8) {
      setState(98);
      locationSemantics();
    }
    setState(101);
    match(apexParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantBufferBlockContext ------------------------------------------------------------------

apexParser::ConstantBufferBlockContext::ConstantBufferBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

apexParser::ConstantBufferContext* apexParser::ConstantBufferBlockContext::constantBuffer() {
  return getRuleContext<apexParser::ConstantBufferContext>(0);
}

tree::TerminalNode* apexParser::ConstantBufferBlockContext::Identifier() {
  return getToken(apexParser::Identifier, 0);
}

apexParser::ConstantBufferContentsContext* apexParser::ConstantBufferBlockContext::constantBufferContents() {
  return getRuleContext<apexParser::ConstantBufferContentsContext>(0);
}


size_t apexParser::ConstantBufferBlockContext::getRuleIndex() const {
  return apexParser::RuleConstantBufferBlock;
}


antlrcpp::Any apexParser::ConstantBufferBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitConstantBufferBlock(this);
  else
    return visitor->visitChildren(this);
}

apexParser::ConstantBufferBlockContext* apexParser::constantBufferBlock() {
  ConstantBufferBlockContext *_localctx = _tracker.createInstance<ConstantBufferBlockContext>(_ctx, getState());
  enterRule(_localctx, 26, apexParser::RuleConstantBufferBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    constantBuffer();
    setState(104);
    match(apexParser::Identifier);
    setState(105);
    match(apexParser::T__1);
    setState(107);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << apexParser::T__15)
      | (1ULL << apexParser::T__16)
      | (1ULL << apexParser::T__17)
      | (1ULL << apexParser::T__18)
      | (1ULL << apexParser::T__19)
      | (1ULL << apexParser::T__20)
      | (1ULL << apexParser::T__21)
      | (1ULL << apexParser::T__22)
      | (1ULL << apexParser::T__23)
      | (1ULL << apexParser::T__24)
      | (1ULL << apexParser::T__25)
      | (1ULL << apexParser::T__26)
      | (1ULL << apexParser::T__27)
      | (1ULL << apexParser::T__28)
      | (1ULL << apexParser::T__29)
      | (1ULL << apexParser::T__30)
      | (1ULL << apexParser::T__31)
      | (1ULL << apexParser::T__32)
      | (1ULL << apexParser::T__33)
      | (1ULL << apexParser::T__34)
      | (1ULL << apexParser::T__35)
      | (1ULL << apexParser::T__36)
      | (1ULL << apexParser::T__37)
      | (1ULL << apexParser::T__38)
      | (1ULL << apexParser::T__39)
      | (1ULL << apexParser::T__40)
      | (1ULL << apexParser::T__41)
      | (1ULL << apexParser::T__42)
      | (1ULL << apexParser::T__43)
      | (1ULL << apexParser::T__44)
      | (1ULL << apexParser::T__45)
      | (1ULL << apexParser::T__46)
      | (1ULL << apexParser::T__47)
      | (1ULL << apexParser::T__48)
      | (1ULL << apexParser::T__49)
      | (1ULL << apexParser::T__50)
      | (1ULL << apexParser::T__51)
      | (1ULL << apexParser::T__52)
      | (1ULL << apexParser::T__53)
      | (1ULL << apexParser::T__54)
      | (1ULL << apexParser::T__55)
      | (1ULL << apexParser::T__56)
      | (1ULL << apexParser::T__57)
      | (1ULL << apexParser::T__58)
      | (1ULL << apexParser::T__59)
      | (1ULL << apexParser::T__60)
      | (1ULL << apexParser::T__61)
      | (1ULL << apexParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (apexParser::T__63 - 64))
      | (1ULL << (apexParser::T__64 - 64))
      | (1ULL << (apexParser::T__65 - 64))
      | (1ULL << (apexParser::T__66 - 64))
      | (1ULL << (apexParser::T__67 - 64))
      | (1ULL << (apexParser::T__68 - 64))
      | (1ULL << (apexParser::T__69 - 64))
      | (1ULL << (apexParser::T__70 - 64))
      | (1ULL << (apexParser::T__71 - 64))
      | (1ULL << (apexParser::T__72 - 64))
      | (1ULL << (apexParser::T__73 - 64))
      | (1ULL << (apexParser::T__74 - 64))
      | (1ULL << (apexParser::T__75 - 64))
      | (1ULL << (apexParser::T__76 - 64))
      | (1ULL << (apexParser::T__77 - 64))
      | (1ULL << (apexParser::T__78 - 64))
      | (1ULL << (apexParser::T__79 - 64))
      | (1ULL << (apexParser::T__80 - 64))
      | (1ULL << (apexParser::T__81 - 64))
      | (1ULL << (apexParser::T__82 - 64))
      | (1ULL << (apexParser::T__83 - 64))
      | (1ULL << (apexParser::T__84 - 64))
      | (1ULL << (apexParser::T__85 - 64))
      | (1ULL << (apexParser::T__86 - 64))
      | (1ULL << (apexParser::T__87 - 64))
      | (1ULL << (apexParser::T__88 - 64))
      | (1ULL << (apexParser::T__89 - 64))
      | (1ULL << (apexParser::T__90 - 64))
      | (1ULL << (apexParser::T__91 - 64))
      | (1ULL << (apexParser::T__92 - 64)))) != 0)) {
      setState(106);
      constantBufferContents();
    }
    setState(109);
    match(apexParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantBufferContext ------------------------------------------------------------------

apexParser::ConstantBufferContext::ConstantBufferContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t apexParser::ConstantBufferContext::getRuleIndex() const {
  return apexParser::RuleConstantBuffer;
}


antlrcpp::Any apexParser::ConstantBufferContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitConstantBuffer(this);
  else
    return visitor->visitChildren(this);
}

apexParser::ConstantBufferContext* apexParser::constantBuffer() {
  ConstantBufferContext *_localctx = _tracker.createInstance<ConstantBufferContext>(_ctx, getState());
  enterRule(_localctx, 28, apexParser::RuleConstantBuffer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(apexParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantBufferContentsContext ------------------------------------------------------------------

apexParser::ConstantBufferContentsContext::ConstantBufferContentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<apexParser::VariableDeclContext *> apexParser::ConstantBufferContentsContext::variableDecl() {
  return getRuleContexts<apexParser::VariableDeclContext>();
}

apexParser::VariableDeclContext* apexParser::ConstantBufferContentsContext::variableDecl(size_t i) {
  return getRuleContext<apexParser::VariableDeclContext>(i);
}


size_t apexParser::ConstantBufferContentsContext::getRuleIndex() const {
  return apexParser::RuleConstantBufferContents;
}


antlrcpp::Any apexParser::ConstantBufferContentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitConstantBufferContents(this);
  else
    return visitor->visitChildren(this);
}

apexParser::ConstantBufferContentsContext* apexParser::constantBufferContents() {
  ConstantBufferContentsContext *_localctx = _tracker.createInstance<ConstantBufferContentsContext>(_ctx, getState());
  enterRule(_localctx, 30, apexParser::RuleConstantBufferContents);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(113);
      variableDecl();
      setState(114);
      match(apexParser::T__6);
      setState(118); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << apexParser::T__15)
      | (1ULL << apexParser::T__16)
      | (1ULL << apexParser::T__17)
      | (1ULL << apexParser::T__18)
      | (1ULL << apexParser::T__19)
      | (1ULL << apexParser::T__20)
      | (1ULL << apexParser::T__21)
      | (1ULL << apexParser::T__22)
      | (1ULL << apexParser::T__23)
      | (1ULL << apexParser::T__24)
      | (1ULL << apexParser::T__25)
      | (1ULL << apexParser::T__26)
      | (1ULL << apexParser::T__27)
      | (1ULL << apexParser::T__28)
      | (1ULL << apexParser::T__29)
      | (1ULL << apexParser::T__30)
      | (1ULL << apexParser::T__31)
      | (1ULL << apexParser::T__32)
      | (1ULL << apexParser::T__33)
      | (1ULL << apexParser::T__34)
      | (1ULL << apexParser::T__35)
      | (1ULL << apexParser::T__36)
      | (1ULL << apexParser::T__37)
      | (1ULL << apexParser::T__38)
      | (1ULL << apexParser::T__39)
      | (1ULL << apexParser::T__40)
      | (1ULL << apexParser::T__41)
      | (1ULL << apexParser::T__42)
      | (1ULL << apexParser::T__43)
      | (1ULL << apexParser::T__44)
      | (1ULL << apexParser::T__45)
      | (1ULL << apexParser::T__46)
      | (1ULL << apexParser::T__47)
      | (1ULL << apexParser::T__48)
      | (1ULL << apexParser::T__49)
      | (1ULL << apexParser::T__50)
      | (1ULL << apexParser::T__51)
      | (1ULL << apexParser::T__52)
      | (1ULL << apexParser::T__53)
      | (1ULL << apexParser::T__54)
      | (1ULL << apexParser::T__55)
      | (1ULL << apexParser::T__56)
      | (1ULL << apexParser::T__57)
      | (1ULL << apexParser::T__58)
      | (1ULL << apexParser::T__59)
      | (1ULL << apexParser::T__60)
      | (1ULL << apexParser::T__61)
      | (1ULL << apexParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (apexParser::T__63 - 64))
      | (1ULL << (apexParser::T__64 - 64))
      | (1ULL << (apexParser::T__65 - 64))
      | (1ULL << (apexParser::T__66 - 64))
      | (1ULL << (apexParser::T__67 - 64))
      | (1ULL << (apexParser::T__68 - 64))
      | (1ULL << (apexParser::T__69 - 64))
      | (1ULL << (apexParser::T__70 - 64))
      | (1ULL << (apexParser::T__71 - 64))
      | (1ULL << (apexParser::T__72 - 64))
      | (1ULL << (apexParser::T__73 - 64))
      | (1ULL << (apexParser::T__74 - 64))
      | (1ULL << (apexParser::T__75 - 64))
      | (1ULL << (apexParser::T__76 - 64))
      | (1ULL << (apexParser::T__77 - 64))
      | (1ULL << (apexParser::T__78 - 64))
      | (1ULL << (apexParser::T__79 - 64))
      | (1ULL << (apexParser::T__80 - 64))
      | (1ULL << (apexParser::T__81 - 64))
      | (1ULL << (apexParser::T__82 - 64))
      | (1ULL << (apexParser::T__83 - 64))
      | (1ULL << (apexParser::T__84 - 64))
      | (1ULL << (apexParser::T__85 - 64))
      | (1ULL << (apexParser::T__86 - 64))
      | (1ULL << (apexParser::T__87 - 64))
      | (1ULL << (apexParser::T__88 - 64))
      | (1ULL << (apexParser::T__89 - 64))
      | (1ULL << (apexParser::T__90 - 64))
      | (1ULL << (apexParser::T__91 - 64))
      | (1ULL << (apexParser::T__92 - 64)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclContext ------------------------------------------------------------------

apexParser::VariableDeclContext::VariableDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

apexParser::BuiltinTypesContext* apexParser::VariableDeclContext::builtinTypes() {
  return getRuleContext<apexParser::BuiltinTypesContext>(0);
}

tree::TerminalNode* apexParser::VariableDeclContext::Identifier() {
  return getToken(apexParser::Identifier, 0);
}


size_t apexParser::VariableDeclContext::getRuleIndex() const {
  return apexParser::RuleVariableDecl;
}


antlrcpp::Any apexParser::VariableDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitVariableDecl(this);
  else
    return visitor->visitChildren(this);
}

apexParser::VariableDeclContext* apexParser::variableDecl() {
  VariableDeclContext *_localctx = _tracker.createInstance<VariableDeclContext>(_ctx, getState());
  enterRule(_localctx, 32, apexParser::RuleVariableDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    builtinTypes();
    setState(121);
    match(apexParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocationSemanticsContext ------------------------------------------------------------------

apexParser::LocationSemanticsContext::LocationSemanticsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

apexParser::BuiltinSemanticContext* apexParser::LocationSemanticsContext::builtinSemantic() {
  return getRuleContext<apexParser::BuiltinSemanticContext>(0);
}


size_t apexParser::LocationSemanticsContext::getRuleIndex() const {
  return apexParser::RuleLocationSemantics;
}


antlrcpp::Any apexParser::LocationSemanticsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitLocationSemantics(this);
  else
    return visitor->visitChildren(this);
}

apexParser::LocationSemanticsContext* apexParser::locationSemantics() {
  LocationSemanticsContext *_localctx = _tracker.createInstance<LocationSemanticsContext>(_ctx, getState());
  enterRule(_localctx, 34, apexParser::RuleLocationSemantics);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(apexParser::T__8);
    setState(124);
    builtinSemantic();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuiltinSemanticContext ------------------------------------------------------------------

apexParser::BuiltinSemanticContext::BuiltinSemanticContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t apexParser::BuiltinSemanticContext::getRuleIndex() const {
  return apexParser::RuleBuiltinSemantic;
}


antlrcpp::Any apexParser::BuiltinSemanticContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitBuiltinSemantic(this);
  else
    return visitor->visitChildren(this);
}

apexParser::BuiltinSemanticContext* apexParser::builtinSemantic() {
  BuiltinSemanticContext *_localctx = _tracker.createInstance<BuiltinSemanticContext>(_ctx, getState());
  enterRule(_localctx, 36, apexParser::RuleBuiltinSemantic);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << apexParser::T__9)
      | (1ULL << apexParser::T__10)
      | (1ULL << apexParser::T__11)
      | (1ULL << apexParser::T__12)
      | (1ULL << apexParser::T__13)
      | (1ULL << apexParser::T__14))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuiltinTypesContext ------------------------------------------------------------------

apexParser::BuiltinTypesContext::BuiltinTypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t apexParser::BuiltinTypesContext::getRuleIndex() const {
  return apexParser::RuleBuiltinTypes;
}


antlrcpp::Any apexParser::BuiltinTypesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<apexVisitor*>(visitor))
    return parserVisitor->visitBuiltinTypes(this);
  else
    return visitor->visitChildren(this);
}

apexParser::BuiltinTypesContext* apexParser::builtinTypes() {
  BuiltinTypesContext *_localctx = _tracker.createInstance<BuiltinTypesContext>(_ctx, getState());
  enterRule(_localctx, 38, apexParser::RuleBuiltinTypes);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << apexParser::T__15)
      | (1ULL << apexParser::T__16)
      | (1ULL << apexParser::T__17)
      | (1ULL << apexParser::T__18)
      | (1ULL << apexParser::T__19)
      | (1ULL << apexParser::T__20)
      | (1ULL << apexParser::T__21)
      | (1ULL << apexParser::T__22)
      | (1ULL << apexParser::T__23)
      | (1ULL << apexParser::T__24)
      | (1ULL << apexParser::T__25)
      | (1ULL << apexParser::T__26)
      | (1ULL << apexParser::T__27)
      | (1ULL << apexParser::T__28)
      | (1ULL << apexParser::T__29)
      | (1ULL << apexParser::T__30)
      | (1ULL << apexParser::T__31)
      | (1ULL << apexParser::T__32)
      | (1ULL << apexParser::T__33)
      | (1ULL << apexParser::T__34)
      | (1ULL << apexParser::T__35)
      | (1ULL << apexParser::T__36)
      | (1ULL << apexParser::T__37)
      | (1ULL << apexParser::T__38)
      | (1ULL << apexParser::T__39)
      | (1ULL << apexParser::T__40)
      | (1ULL << apexParser::T__41)
      | (1ULL << apexParser::T__42)
      | (1ULL << apexParser::T__43)
      | (1ULL << apexParser::T__44)
      | (1ULL << apexParser::T__45)
      | (1ULL << apexParser::T__46)
      | (1ULL << apexParser::T__47)
      | (1ULL << apexParser::T__48)
      | (1ULL << apexParser::T__49)
      | (1ULL << apexParser::T__50)
      | (1ULL << apexParser::T__51)
      | (1ULL << apexParser::T__52)
      | (1ULL << apexParser::T__53)
      | (1ULL << apexParser::T__54)
      | (1ULL << apexParser::T__55)
      | (1ULL << apexParser::T__56)
      | (1ULL << apexParser::T__57)
      | (1ULL << apexParser::T__58)
      | (1ULL << apexParser::T__59)
      | (1ULL << apexParser::T__60)
      | (1ULL << apexParser::T__61)
      | (1ULL << apexParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (apexParser::T__63 - 64))
      | (1ULL << (apexParser::T__64 - 64))
      | (1ULL << (apexParser::T__65 - 64))
      | (1ULL << (apexParser::T__66 - 64))
      | (1ULL << (apexParser::T__67 - 64))
      | (1ULL << (apexParser::T__68 - 64))
      | (1ULL << (apexParser::T__69 - 64))
      | (1ULL << (apexParser::T__70 - 64))
      | (1ULL << (apexParser::T__71 - 64))
      | (1ULL << (apexParser::T__72 - 64))
      | (1ULL << (apexParser::T__73 - 64))
      | (1ULL << (apexParser::T__74 - 64))
      | (1ULL << (apexParser::T__75 - 64))
      | (1ULL << (apexParser::T__76 - 64))
      | (1ULL << (apexParser::T__77 - 64))
      | (1ULL << (apexParser::T__78 - 64))
      | (1ULL << (apexParser::T__79 - 64))
      | (1ULL << (apexParser::T__80 - 64))
      | (1ULL << (apexParser::T__81 - 64))
      | (1ULL << (apexParser::T__82 - 64))
      | (1ULL << (apexParser::T__83 - 64))
      | (1ULL << (apexParser::T__84 - 64))
      | (1ULL << (apexParser::T__85 - 64))
      | (1ULL << (apexParser::T__86 - 64))
      | (1ULL << (apexParser::T__87 - 64))
      | (1ULL << (apexParser::T__88 - 64))
      | (1ULL << (apexParser::T__89 - 64))
      | (1ULL << (apexParser::T__90 - 64))
      | (1ULL << (apexParser::T__91 - 64))
      | (1ULL << (apexParser::T__92 - 64)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> apexParser::_decisionToDFA;
atn::PredictionContextCache apexParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN apexParser::_atn;
std::vector<uint16_t> apexParser::_serializedATN;

std::vector<std::string> apexParser::_ruleNames = {
  "translationUnit", "shaderBlock", "shaderBlockContents", "passBlock", 
  "pass", "passBlockContents", "codeBlock", "code", "codeBlockContents", 
  "interfaceBlock", "interfacetype", "interfaceContent", "interfaceVariableDecl", 
  "constantBufferBlock", "constantBuffer", "constantBufferContents", "variableDecl", 
  "locationSemantics", "builtinSemantic", "builtinTypes"
};

std::vector<std::string> apexParser::_literalNames = {
  "", "'shader'", "'{'", "'};'", "'pass'", "'code'", "'interface'", "';'", 
  "'constantbuffer'", "':'", "'POSITION'", "'TEXCOORD0'", "'TEXCOORD1'", 
  "'NORMAL'", "'BINORMAL'", "'COLOR'", "'bool'", "'int'", "'uint'", "'float'", 
  "'double'", "'bvec2'", "'bvec3'", "'bvec4'", "'ivec2'", "'ivec3'", "'ivec4'", 
  "'uvec2'", "'uvec3'", "'uvec4'", "'dvec2'", "'dvec3'", "'dvec4'", "'vec2'", 
  "'vec3'", "'vec4'", "'mat2'", "'mat3'", "'mat4'", "'mat2x3'", "'mat2x4'", 
  "'mat3x2'", "'mat3x4'", "'mat4x2'", "'mat4x3'", "'dmat2'", "'dmat3'", 
  "'dmat4'", "'dmat2x3'", "'dmat2x4'", "'dmat3x2'", "'dmat3x4'", "'dmat4x2'", 
  "'dmat4x3'", "'Texture1D'", "'ITexture1D'", "'UTexture1D'", "'Texture1DArray'", 
  "'ITexture1DArray'", "'UTexture1DArray'", "'Texture2D'", "'ITexture2D'", 
  "'UTexture2D'", "'Texture2DArray'", "'ITexture2DArray'", "'UTexture2DArray'", 
  "'Texture3D'", "'ITexture3D'", "'UTexture3D'", "'Texture3DArray'", "'ITexture3DArray'", 
  "'UTexture3DArray'", "'TextureCube'", "'ITextureCube'", "'UTextureCube'", 
  "'TextureCubeArray'", "'ITextureCubeArray'", "'UTextureCubeArray'", "'Texture2DRect'", 
  "'ITexture2DRect'", "'UTexture2DRect'", "'Texture2DMS'", "'ITexture2DMS'", 
  "'UTexture2DMS'", "'Texture2DMSArray'", "'ITexture2DMSArray'", "'UTexture2DMSArray'", 
  "'Texture1DShadow'", "'Texture2DShadow'", "'TextureCubeShadow'", "'Texture2DRectShadow'", 
  "'Texture1DArrayShadow'", "'Texture2DArrayShadow'", "'TextureCubeArrayShadow'"
};

std::vector<std::string> apexParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "Identifier", "Whitespace", "Newline", "BlockComment", 
  "LineComment"
};

dfa::Vocabulary apexParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> apexParser::_tokenNames;

apexParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x64, 0x85, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x6, 0x4, 0x34, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 
    0x35, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x3a, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x3e, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x49, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 
    0x51, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x52, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0x59, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x6, 0xd, 0x60, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x61, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x66, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x6e, 0xa, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 
    0x77, 0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0x78, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x2, 0x2, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2, 0x4, 0x3, 0x2, 0xc, 0x11, 0x3, 0x2, 0x12, 0x5f, 0x2, 
    0x7b, 0x2, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x33, 0x3, 0x2, 0x2, 0x2, 0x8, 0x37, 0x3, 0x2, 0x2, 0x2, 0xa, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x43, 0x3, 0x2, 0x2, 0x2, 0xe, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x54, 0x3, 0x2, 0x2, 0x2, 0x16, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x20, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x24, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x80, 0x3, 0x2, 0x2, 0x2, 0x28, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x2b, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x60, 0x2, 0x2, 
    0x2e, 0x2f, 0x7, 0x4, 0x2, 0x2, 0x2f, 0x30, 0x5, 0x6, 0x4, 0x2, 0x30, 
    0x31, 0x7, 0x5, 0x2, 0x2, 0x31, 0x5, 0x3, 0x2, 0x2, 0x2, 0x32, 0x34, 
    0x5, 0x8, 0x5, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x7, 0x3, 0x2, 0x2, 0x2, 0x37, 0x39, 0x5, 0xa, 0x6, 
    0x2, 0x38, 0x3a, 0x7, 0x60, 0x2, 0x2, 0x39, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 
    0x3d, 0x7, 0x4, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0xc, 0x7, 0x2, 0x3d, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x5, 0x2, 0x2, 0x40, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x42, 0x7, 0x6, 0x2, 0x2, 0x42, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x44, 0x5, 0xe, 0x8, 0x2, 0x44, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x46, 0x5, 0x10, 0x9, 0x2, 0x46, 0x48, 0x7, 0x4, 0x2, 0x2, 0x47, 
    0x49, 0x5, 0x12, 0xa, 0x2, 0x48, 0x47, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x7, 
    0x5, 0x2, 0x2, 0x4b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x7, 
    0x2, 0x2, 0x4d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x51, 0x5, 0x14, 0xb, 
    0x2, 0x4f, 0x51, 0x5, 0x1c, 0xf, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x5, 0x16, 0xc, 0x2, 0x55, 0x56, 0x7, 
    0x60, 0x2, 0x2, 0x56, 0x58, 0x7, 0x4, 0x2, 0x2, 0x57, 0x59, 0x5, 0x18, 
    0xd, 0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x5, 0x2, 0x2, 
    0x5b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x8, 0x2, 0x2, 0x5d, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x1a, 0xe, 0x2, 0x5f, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x65, 0x5, 0x22, 0x12, 0x2, 0x64, 0x66, 0x5, 0x24, 0x13, 
    0x2, 0x65, 0x64, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x9, 0x2, 0x2, 0x68, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x1e, 0x10, 0x2, 0x6a, 0x6b, 
    0x7, 0x60, 0x2, 0x2, 0x6b, 0x6d, 0x7, 0x4, 0x2, 0x2, 0x6c, 0x6e, 0x5, 
    0x20, 0x11, 0x2, 0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x5, 0x2, 
    0x2, 0x70, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0xa, 0x2, 0x2, 
    0x72, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x5, 0x22, 0x12, 0x2, 0x74, 
    0x75, 0x7, 0x9, 0x2, 0x2, 0x75, 0x77, 0x3, 0x2, 0x2, 0x2, 0x76, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x7b, 0x5, 0x28, 0x15, 0x2, 0x7b, 0x7c, 0x7, 0x60, 0x2, 
    0x2, 0x7c, 0x23, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0xb, 0x2, 0x2, 
    0x7e, 0x7f, 0x5, 0x26, 0x14, 0x2, 0x7f, 0x25, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x81, 0x9, 0x2, 0x2, 0x2, 0x81, 0x27, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 
    0x9, 0x3, 0x2, 0x2, 0x83, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd, 0x35, 0x39, 
    0x3d, 0x48, 0x50, 0x52, 0x58, 0x61, 0x65, 0x6d, 0x78, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

apexParser::Initializer apexParser::_init;
