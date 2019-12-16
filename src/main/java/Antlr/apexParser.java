// Generated from e:\Code\Antlr\apex.g4 by ANTLR 4.7.1
package Antlr;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class apexParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, T__33=34, T__34=35, T__35=36, T__36=37, T__37=38, 
		T__38=39, T__39=40, T__40=41, T__41=42, T__42=43, T__43=44, T__44=45, 
		T__45=46, T__46=47, T__47=48, T__48=49, T__49=50, T__50=51, T__51=52, 
		T__52=53, T__53=54, T__54=55, T__55=56, T__56=57, T__57=58, T__58=59, 
		T__59=60, T__60=61, T__61=62, T__62=63, T__63=64, T__64=65, T__65=66, 
		T__66=67, T__67=68, T__68=69, T__69=70, T__70=71, T__71=72, T__72=73, 
		T__73=74, T__74=75, T__75=76, T__76=77, T__77=78, T__78=79, T__79=80, 
		T__80=81, T__81=82, T__82=83, T__83=84, T__84=85, T__85=86, T__86=87, 
		T__87=88, T__88=89, T__89=90, T__90=91, T__91=92, T__92=93, Identifier=94, 
		Whitespace=95, Newline=96, BlockComment=97, LineComment=98;
	public static final int
		RULE_translationUnit = 0, RULE_shaderBlock = 1, RULE_shaderBlockContents = 2, 
		RULE_passBlock = 3, RULE_pass = 4, RULE_passBlockContents = 5, RULE_codeBlock = 6, 
		RULE_code = 7, RULE_codeBlockContents = 8, RULE_interfaceBlock = 9, RULE_interfacetype = 10, 
		RULE_interfaceContent = 11, RULE_interfaceVariableDecl = 12, RULE_constantBufferBlock = 13, 
		RULE_constantBuffer = 14, RULE_constantBufferContents = 15, RULE_variableDecl = 16, 
		RULE_locationSemantics = 17, RULE_builtinSemantic = 18, RULE_builtinTypes = 19;
	public static final String[] ruleNames = {
		"translationUnit", "shaderBlock", "shaderBlockContents", "passBlock", 
		"pass", "passBlockContents", "codeBlock", "code", "codeBlockContents", 
		"interfaceBlock", "interfacetype", "interfaceContent", "interfaceVariableDecl", 
		"constantBufferBlock", "constantBuffer", "constantBufferContents", "variableDecl", 
		"locationSemantics", "builtinSemantic", "builtinTypes"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'shader'", "'{'", "'};'", "'pass'", "'code'", "'interface'", "';'", 
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
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, "Identifier", 
		"Whitespace", "Newline", "BlockComment", "LineComment"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "apex.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public apexParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class TranslationUnitContext extends ParserRuleContext {
		public ShaderBlockContext shaderBlock() {
			return getRuleContext(ShaderBlockContext.class,0);
		}
		public TranslationUnitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_translationUnit; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitTranslationUnit(this);
			else return visitor.visitChildren(this);
		}
	}

	public final TranslationUnitContext translationUnit() throws RecognitionException {
		TranslationUnitContext _localctx = new TranslationUnitContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_translationUnit);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(40);
			shaderBlock();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ShaderBlockContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(apexParser.Identifier, 0); }
		public ShaderBlockContentsContext shaderBlockContents() {
			return getRuleContext(ShaderBlockContentsContext.class,0);
		}
		public ShaderBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shaderBlock; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitShaderBlock(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ShaderBlockContext shaderBlock() throws RecognitionException {
		ShaderBlockContext _localctx = new ShaderBlockContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_shaderBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(42);
			match(T__0);
			setState(43);
			match(Identifier);
			setState(44);
			match(T__1);
			setState(45);
			shaderBlockContents();
			setState(46);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ShaderBlockContentsContext extends ParserRuleContext {
		public List<PassBlockContext> passBlock() {
			return getRuleContexts(PassBlockContext.class);
		}
		public PassBlockContext passBlock(int i) {
			return getRuleContext(PassBlockContext.class,i);
		}
		public ShaderBlockContentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shaderBlockContents; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitShaderBlockContents(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ShaderBlockContentsContext shaderBlockContents() throws RecognitionException {
		ShaderBlockContentsContext _localctx = new ShaderBlockContentsContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_shaderBlockContents);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(49); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(48);
				passBlock();
				}
				}
				setState(51); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__3 );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PassBlockContext extends ParserRuleContext {
		public PassContext pass() {
			return getRuleContext(PassContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(apexParser.Identifier, 0); }
		public PassBlockContentsContext passBlockContents() {
			return getRuleContext(PassBlockContentsContext.class,0);
		}
		public PassBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_passBlock; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitPassBlock(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PassBlockContext passBlock() throws RecognitionException {
		PassBlockContext _localctx = new PassBlockContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_passBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(53);
			pass();
			setState(55);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(54);
				match(Identifier);
				}
			}

			setState(57);
			match(T__1);
			setState(59);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__4) {
				{
				setState(58);
				passBlockContents();
				}
			}

			setState(61);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PassContext extends ParserRuleContext {
		public PassContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pass; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitPass(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PassContext pass() throws RecognitionException {
		PassContext _localctx = new PassContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_pass);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(63);
			match(T__3);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PassBlockContentsContext extends ParserRuleContext {
		public List<CodeBlockContext> codeBlock() {
			return getRuleContexts(CodeBlockContext.class);
		}
		public CodeBlockContext codeBlock(int i) {
			return getRuleContext(CodeBlockContext.class,i);
		}
		public PassBlockContentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_passBlockContents; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitPassBlockContents(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PassBlockContentsContext passBlockContents() throws RecognitionException {
		PassBlockContentsContext _localctx = new PassBlockContentsContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_passBlockContents);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(66); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(65);
				codeBlock();
				}
				}
				setState(68); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__4 );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CodeBlockContext extends ParserRuleContext {
		public CodeContext code() {
			return getRuleContext(CodeContext.class,0);
		}
		public CodeBlockContentsContext codeBlockContents() {
			return getRuleContext(CodeBlockContentsContext.class,0);
		}
		public CodeBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_codeBlock; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitCodeBlock(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CodeBlockContext codeBlock() throws RecognitionException {
		CodeBlockContext _localctx = new CodeBlockContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_codeBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			code();
			setState(71);
			match(T__1);
			setState(73);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__5 || _la==T__7) {
				{
				setState(72);
				codeBlockContents();
				}
			}

			setState(75);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CodeContext extends ParserRuleContext {
		public CodeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_code; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitCode(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CodeContext code() throws RecognitionException {
		CodeContext _localctx = new CodeContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_code);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(77);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CodeBlockContentsContext extends ParserRuleContext {
		public List<InterfaceBlockContext> interfaceBlock() {
			return getRuleContexts(InterfaceBlockContext.class);
		}
		public InterfaceBlockContext interfaceBlock(int i) {
			return getRuleContext(InterfaceBlockContext.class,i);
		}
		public List<ConstantBufferBlockContext> constantBufferBlock() {
			return getRuleContexts(ConstantBufferBlockContext.class);
		}
		public ConstantBufferBlockContext constantBufferBlock(int i) {
			return getRuleContext(ConstantBufferBlockContext.class,i);
		}
		public CodeBlockContentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_codeBlockContents; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitCodeBlockContents(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CodeBlockContentsContext codeBlockContents() throws RecognitionException {
		CodeBlockContentsContext _localctx = new CodeBlockContentsContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_codeBlockContents);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(81); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				setState(81);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__5:
					{
					setState(79);
					interfaceBlock();
					}
					break;
				case T__7:
					{
					setState(80);
					constantBufferBlock();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(83); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__5 || _la==T__7 );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InterfaceBlockContext extends ParserRuleContext {
		public InterfacetypeContext interfacetype() {
			return getRuleContext(InterfacetypeContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(apexParser.Identifier, 0); }
		public InterfaceContentContext interfaceContent() {
			return getRuleContext(InterfaceContentContext.class,0);
		}
		public InterfaceBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_interfaceBlock; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitInterfaceBlock(this);
			else return visitor.visitChildren(this);
		}
	}

	public final InterfaceBlockContext interfaceBlock() throws RecognitionException {
		InterfaceBlockContext _localctx = new InterfaceBlockContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_interfaceBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(85);
			interfacetype();
			setState(86);
			match(Identifier);
			setState(87);
			match(T__1);
			setState(89);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__42) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (T__68 - 64)) | (1L << (T__69 - 64)) | (1L << (T__70 - 64)) | (1L << (T__71 - 64)) | (1L << (T__72 - 64)) | (1L << (T__73 - 64)) | (1L << (T__74 - 64)) | (1L << (T__75 - 64)) | (1L << (T__76 - 64)) | (1L << (T__77 - 64)) | (1L << (T__78 - 64)) | (1L << (T__79 - 64)) | (1L << (T__80 - 64)) | (1L << (T__81 - 64)) | (1L << (T__82 - 64)) | (1L << (T__83 - 64)) | (1L << (T__84 - 64)) | (1L << (T__85 - 64)) | (1L << (T__86 - 64)) | (1L << (T__87 - 64)) | (1L << (T__88 - 64)) | (1L << (T__89 - 64)) | (1L << (T__90 - 64)) | (1L << (T__91 - 64)) | (1L << (T__92 - 64)))) != 0)) {
				{
				setState(88);
				interfaceContent();
				}
			}

			setState(91);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InterfacetypeContext extends ParserRuleContext {
		public InterfacetypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_interfacetype; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitInterfacetype(this);
			else return visitor.visitChildren(this);
		}
	}

	public final InterfacetypeContext interfacetype() throws RecognitionException {
		InterfacetypeContext _localctx = new InterfacetypeContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_interfacetype);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(93);
			match(T__5);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InterfaceContentContext extends ParserRuleContext {
		public List<InterfaceVariableDeclContext> interfaceVariableDecl() {
			return getRuleContexts(InterfaceVariableDeclContext.class);
		}
		public InterfaceVariableDeclContext interfaceVariableDecl(int i) {
			return getRuleContext(InterfaceVariableDeclContext.class,i);
		}
		public InterfaceContentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_interfaceContent; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitInterfaceContent(this);
			else return visitor.visitChildren(this);
		}
	}

	public final InterfaceContentContext interfaceContent() throws RecognitionException {
		InterfaceContentContext _localctx = new InterfaceContentContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_interfaceContent);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(96); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(95);
				interfaceVariableDecl();
				}
				}
				setState(98); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__42) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (T__68 - 64)) | (1L << (T__69 - 64)) | (1L << (T__70 - 64)) | (1L << (T__71 - 64)) | (1L << (T__72 - 64)) | (1L << (T__73 - 64)) | (1L << (T__74 - 64)) | (1L << (T__75 - 64)) | (1L << (T__76 - 64)) | (1L << (T__77 - 64)) | (1L << (T__78 - 64)) | (1L << (T__79 - 64)) | (1L << (T__80 - 64)) | (1L << (T__81 - 64)) | (1L << (T__82 - 64)) | (1L << (T__83 - 64)) | (1L << (T__84 - 64)) | (1L << (T__85 - 64)) | (1L << (T__86 - 64)) | (1L << (T__87 - 64)) | (1L << (T__88 - 64)) | (1L << (T__89 - 64)) | (1L << (T__90 - 64)) | (1L << (T__91 - 64)) | (1L << (T__92 - 64)))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InterfaceVariableDeclContext extends ParserRuleContext {
		public VariableDeclContext variableDecl() {
			return getRuleContext(VariableDeclContext.class,0);
		}
		public LocationSemanticsContext locationSemantics() {
			return getRuleContext(LocationSemanticsContext.class,0);
		}
		public InterfaceVariableDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_interfaceVariableDecl; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitInterfaceVariableDecl(this);
			else return visitor.visitChildren(this);
		}
	}

	public final InterfaceVariableDeclContext interfaceVariableDecl() throws RecognitionException {
		InterfaceVariableDeclContext _localctx = new InterfaceVariableDeclContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_interfaceVariableDecl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(100);
			variableDecl();
			setState(102);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__8) {
				{
				setState(101);
				locationSemantics();
				}
			}

			setState(104);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantBufferBlockContext extends ParserRuleContext {
		public ConstantBufferContext constantBuffer() {
			return getRuleContext(ConstantBufferContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(apexParser.Identifier, 0); }
		public ConstantBufferContentsContext constantBufferContents() {
			return getRuleContext(ConstantBufferContentsContext.class,0);
		}
		public ConstantBufferBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constantBufferBlock; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitConstantBufferBlock(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ConstantBufferBlockContext constantBufferBlock() throws RecognitionException {
		ConstantBufferBlockContext _localctx = new ConstantBufferBlockContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_constantBufferBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(106);
			constantBuffer();
			setState(107);
			match(Identifier);
			setState(108);
			match(T__1);
			setState(110);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__42) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (T__68 - 64)) | (1L << (T__69 - 64)) | (1L << (T__70 - 64)) | (1L << (T__71 - 64)) | (1L << (T__72 - 64)) | (1L << (T__73 - 64)) | (1L << (T__74 - 64)) | (1L << (T__75 - 64)) | (1L << (T__76 - 64)) | (1L << (T__77 - 64)) | (1L << (T__78 - 64)) | (1L << (T__79 - 64)) | (1L << (T__80 - 64)) | (1L << (T__81 - 64)) | (1L << (T__82 - 64)) | (1L << (T__83 - 64)) | (1L << (T__84 - 64)) | (1L << (T__85 - 64)) | (1L << (T__86 - 64)) | (1L << (T__87 - 64)) | (1L << (T__88 - 64)) | (1L << (T__89 - 64)) | (1L << (T__90 - 64)) | (1L << (T__91 - 64)) | (1L << (T__92 - 64)))) != 0)) {
				{
				setState(109);
				constantBufferContents();
				}
			}

			setState(112);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantBufferContext extends ParserRuleContext {
		public ConstantBufferContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constantBuffer; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitConstantBuffer(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ConstantBufferContext constantBuffer() throws RecognitionException {
		ConstantBufferContext _localctx = new ConstantBufferContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_constantBuffer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(114);
			match(T__7);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantBufferContentsContext extends ParserRuleContext {
		public List<VariableDeclContext> variableDecl() {
			return getRuleContexts(VariableDeclContext.class);
		}
		public VariableDeclContext variableDecl(int i) {
			return getRuleContext(VariableDeclContext.class,i);
		}
		public ConstantBufferContentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constantBufferContents; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitConstantBufferContents(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ConstantBufferContentsContext constantBufferContents() throws RecognitionException {
		ConstantBufferContentsContext _localctx = new ConstantBufferContentsContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_constantBufferContents);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(119); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(116);
				variableDecl();
				setState(117);
				match(T__6);
				}
				}
				setState(121); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__42) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (T__68 - 64)) | (1L << (T__69 - 64)) | (1L << (T__70 - 64)) | (1L << (T__71 - 64)) | (1L << (T__72 - 64)) | (1L << (T__73 - 64)) | (1L << (T__74 - 64)) | (1L << (T__75 - 64)) | (1L << (T__76 - 64)) | (1L << (T__77 - 64)) | (1L << (T__78 - 64)) | (1L << (T__79 - 64)) | (1L << (T__80 - 64)) | (1L << (T__81 - 64)) | (1L << (T__82 - 64)) | (1L << (T__83 - 64)) | (1L << (T__84 - 64)) | (1L << (T__85 - 64)) | (1L << (T__86 - 64)) | (1L << (T__87 - 64)) | (1L << (T__88 - 64)) | (1L << (T__89 - 64)) | (1L << (T__90 - 64)) | (1L << (T__91 - 64)) | (1L << (T__92 - 64)))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableDeclContext extends ParserRuleContext {
		public BuiltinTypesContext builtinTypes() {
			return getRuleContext(BuiltinTypesContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(apexParser.Identifier, 0); }
		public VariableDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDecl; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitVariableDecl(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VariableDeclContext variableDecl() throws RecognitionException {
		VariableDeclContext _localctx = new VariableDeclContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_variableDecl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(123);
			builtinTypes();
			setState(124);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LocationSemanticsContext extends ParserRuleContext {
		public BuiltinSemanticContext builtinSemantic() {
			return getRuleContext(BuiltinSemanticContext.class,0);
		}
		public LocationSemanticsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_locationSemantics; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitLocationSemantics(this);
			else return visitor.visitChildren(this);
		}
	}

	public final LocationSemanticsContext locationSemantics() throws RecognitionException {
		LocationSemanticsContext _localctx = new LocationSemanticsContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_locationSemantics);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			match(T__8);
			setState(127);
			builtinSemantic();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BuiltinSemanticContext extends ParserRuleContext {
		public BuiltinSemanticContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_builtinSemantic; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitBuiltinSemantic(this);
			else return visitor.visitChildren(this);
		}
	}

	public final BuiltinSemanticContext builtinSemantic() throws RecognitionException {
		BuiltinSemanticContext _localctx = new BuiltinSemanticContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_builtinSemantic);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(129);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__13) | (1L << T__14))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BuiltinTypesContext extends ParserRuleContext {
		public BuiltinTypesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_builtinTypes; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof apexVisitor ) return ((apexVisitor<? extends T>)visitor).visitBuiltinTypes(this);
			else return visitor.visitChildren(this);
		}
	}

	public final BuiltinTypesContext builtinTypes() throws RecognitionException {
		BuiltinTypesContext _localctx = new BuiltinTypesContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_builtinTypes);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(131);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__42) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (T__68 - 64)) | (1L << (T__69 - 64)) | (1L << (T__70 - 64)) | (1L << (T__71 - 64)) | (1L << (T__72 - 64)) | (1L << (T__73 - 64)) | (1L << (T__74 - 64)) | (1L << (T__75 - 64)) | (1L << (T__76 - 64)) | (1L << (T__77 - 64)) | (1L << (T__78 - 64)) | (1L << (T__79 - 64)) | (1L << (T__80 - 64)) | (1L << (T__81 - 64)) | (1L << (T__82 - 64)) | (1L << (T__83 - 64)) | (1L << (T__84 - 64)) | (1L << (T__85 - 64)) | (1L << (T__86 - 64)) | (1L << (T__87 - 64)) | (1L << (T__88 - 64)) | (1L << (T__89 - 64)) | (1L << (T__90 - 64)) | (1L << (T__91 - 64)) | (1L << (T__92 - 64)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3d\u0088\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\4\6\4"+
		"\64\n\4\r\4\16\4\65\3\5\3\5\5\5:\n\5\3\5\3\5\5\5>\n\5\3\5\3\5\3\6\3\6"+
		"\3\7\6\7E\n\7\r\7\16\7F\3\b\3\b\3\b\5\bL\n\b\3\b\3\b\3\t\3\t\3\n\3\n\6"+
		"\nT\n\n\r\n\16\nU\3\13\3\13\3\13\3\13\5\13\\\n\13\3\13\3\13\3\f\3\f\3"+
		"\r\6\rc\n\r\r\r\16\rd\3\16\3\16\5\16i\n\16\3\16\3\16\3\17\3\17\3\17\3"+
		"\17\5\17q\n\17\3\17\3\17\3\20\3\20\3\21\3\21\3\21\6\21z\n\21\r\21\16\21"+
		"{\3\22\3\22\3\22\3\23\3\23\3\23\3\24\3\24\3\25\3\25\3\25\2\2\26\2\4\6"+
		"\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(\2\4\3\2\f\21\3\2\22_\2\177\2*"+
		"\3\2\2\2\4,\3\2\2\2\6\63\3\2\2\2\b\67\3\2\2\2\nA\3\2\2\2\fD\3\2\2\2\16"+
		"H\3\2\2\2\20O\3\2\2\2\22S\3\2\2\2\24W\3\2\2\2\26_\3\2\2\2\30b\3\2\2\2"+
		"\32f\3\2\2\2\34l\3\2\2\2\36t\3\2\2\2 y\3\2\2\2\"}\3\2\2\2$\u0080\3\2\2"+
		"\2&\u0083\3\2\2\2(\u0085\3\2\2\2*+\5\4\3\2+\3\3\2\2\2,-\7\3\2\2-.\7`\2"+
		"\2./\7\4\2\2/\60\5\6\4\2\60\61\7\5\2\2\61\5\3\2\2\2\62\64\5\b\5\2\63\62"+
		"\3\2\2\2\64\65\3\2\2\2\65\63\3\2\2\2\65\66\3\2\2\2\66\7\3\2\2\2\679\5"+
		"\n\6\28:\7`\2\298\3\2\2\29:\3\2\2\2:;\3\2\2\2;=\7\4\2\2<>\5\f\7\2=<\3"+
		"\2\2\2=>\3\2\2\2>?\3\2\2\2?@\7\5\2\2@\t\3\2\2\2AB\7\6\2\2B\13\3\2\2\2"+
		"CE\5\16\b\2DC\3\2\2\2EF\3\2\2\2FD\3\2\2\2FG\3\2\2\2G\r\3\2\2\2HI\5\20"+
		"\t\2IK\7\4\2\2JL\5\22\n\2KJ\3\2\2\2KL\3\2\2\2LM\3\2\2\2MN\7\5\2\2N\17"+
		"\3\2\2\2OP\7\7\2\2P\21\3\2\2\2QT\5\24\13\2RT\5\34\17\2SQ\3\2\2\2SR\3\2"+
		"\2\2TU\3\2\2\2US\3\2\2\2UV\3\2\2\2V\23\3\2\2\2WX\5\26\f\2XY\7`\2\2Y[\7"+
		"\4\2\2Z\\\5\30\r\2[Z\3\2\2\2[\\\3\2\2\2\\]\3\2\2\2]^\7\5\2\2^\25\3\2\2"+
		"\2_`\7\b\2\2`\27\3\2\2\2ac\5\32\16\2ba\3\2\2\2cd\3\2\2\2db\3\2\2\2de\3"+
		"\2\2\2e\31\3\2\2\2fh\5\"\22\2gi\5$\23\2hg\3\2\2\2hi\3\2\2\2ij\3\2\2\2"+
		"jk\7\t\2\2k\33\3\2\2\2lm\5\36\20\2mn\7`\2\2np\7\4\2\2oq\5 \21\2po\3\2"+
		"\2\2pq\3\2\2\2qr\3\2\2\2rs\7\5\2\2s\35\3\2\2\2tu\7\n\2\2u\37\3\2\2\2v"+
		"w\5\"\22\2wx\7\t\2\2xz\3\2\2\2yv\3\2\2\2z{\3\2\2\2{y\3\2\2\2{|\3\2\2\2"+
		"|!\3\2\2\2}~\5(\25\2~\177\7`\2\2\177#\3\2\2\2\u0080\u0081\7\13\2\2\u0081"+
		"\u0082\5&\24\2\u0082%\3\2\2\2\u0083\u0084\t\2\2\2\u0084\'\3\2\2\2\u0085"+
		"\u0086\t\3\2\2\u0086)\3\2\2\2\16\659=FKSU[dhp{";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}