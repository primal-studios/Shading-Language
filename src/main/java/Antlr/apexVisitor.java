// Generated from e:\Code\Antlr\apex.g4 by ANTLR 4.7.1
package Antlr;
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link apexParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface apexVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link apexParser#translationUnit}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTranslationUnit(apexParser.TranslationUnitContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#shaderBlock}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitShaderBlock(apexParser.ShaderBlockContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#shaderBlockContents}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitShaderBlockContents(apexParser.ShaderBlockContentsContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#passBlock}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPassBlock(apexParser.PassBlockContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#pass}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPass(apexParser.PassContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#passBlockContents}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPassBlockContents(apexParser.PassBlockContentsContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#codeBlock}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCodeBlock(apexParser.CodeBlockContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#code}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCode(apexParser.CodeContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#codeBlockContents}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCodeBlockContents(apexParser.CodeBlockContentsContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#interfaceBlock}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInterfaceBlock(apexParser.InterfaceBlockContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#interfacetype}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInterfacetype(apexParser.InterfacetypeContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#interfaceContent}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInterfaceContent(apexParser.InterfaceContentContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#interfaceVariableDecl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInterfaceVariableDecl(apexParser.InterfaceVariableDeclContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#constantBufferBlock}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitConstantBufferBlock(apexParser.ConstantBufferBlockContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#constantBuffer}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitConstantBuffer(apexParser.ConstantBufferContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#constantBufferContents}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitConstantBufferContents(apexParser.ConstantBufferContentsContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#variableDecl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVariableDecl(apexParser.VariableDeclContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#locationSemantics}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLocationSemantics(apexParser.LocationSemanticsContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#builtinSemantic}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBuiltinSemantic(apexParser.BuiltinSemanticContext ctx);
	/**
	 * Visit a parse tree produced by {@link apexParser#builtinTypes}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBuiltinTypes(apexParser.BuiltinTypesContext ctx);
}