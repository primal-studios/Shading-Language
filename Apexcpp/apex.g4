grammar apex;

translationUnit
   : shaderBlock
   ;

shaderBlock
   : 'shader' Identifier '{' shaderBlockContents '};'
   ;

shaderBlockContents
   : passBlock+
   ;
   
passBlock
   : pass Identifier? '{' passBlockContents? '};'
   ;

pass
   : 'pass'
   ;

passBlockContents
   : codeBlock
   ;

codeBlock
   : code '{' codeBlockContents? '};'
   ;

code
   : 'code'
   ;

codeBlockContents
   : (interfaceBlock | constantBufferBlock)+
   ;

interfaceBlock
   : interfacetype Identifier '{' interfaceContent? '};'
   ;

interfacetype
   : 'interface'
   ;

interfaceContent
   : interfaceVariableDecl+
   ;

interfaceVariableDecl
   : variableDecl locationSemantics? ';'
   ;

constantBufferBlock
   : constantBuffer Identifier '{' constantBufferContents? '};'
   ;

constantBuffer
   : 'constantbuffer'
   ;

constantBufferContents
   : (variableDecl ';')+
   ;

variableDecl
   : builtinTypes Identifier
   ;

locationSemantics
   : ':' builtinSemantic
   ;

fragment NODIGIT
   : [a-zA-Z_]
   ;

fragment DIGIT
   : [0-9]
   ;

Identifier
   : NODIGIT (NODIGIT | DIGIT)*
   ;

builtinSemantic
   : 'POSITION'
   | 'TEXCOORD0'
   | 'TEXCOORD1'
   | 'NORMAL'
   | 'BINORMAL'
   | 'COLOR'
   ;

builtinTypes
   : 'bool'
   | 'int'
   | 'uint'
   | 'float'
   | 'double'
   | 'bvec2'
   | 'bvec3'
   | 'bvec4'
   | 'ivec2'
   | 'ivec3'
   | 'ivec4'
   | 'uvec2'
   | 'uvec3'
   | 'uvec4'
   | 'dvec2'
   | 'dvec3'
   | 'dvec4'
   | 'vec2'
   | 'vec3'
   | 'vec4'
   | 'mat2'
   | 'mat3'
   | 'mat4'
   | 'mat2x3'
   | 'mat2x4'
   | 'mat3x2'
   | 'mat3x4'
   | 'mat4x2'
   | 'mat4x3'
   | 'dmat2'
   | 'dmat3'
   | 'dmat4'
   | 'dmat2x3'
   | 'dmat2x4'
   | 'dmat3x2'
   | 'dmat3x4'
   | 'dmat4x2'
   | 'dmat4x3'
   | 'Texture1D'
   | 'ITexture1D'
   | 'UTexture1D'
   | 'Texture1DArray'
   | 'ITexture1DArray'
   | 'UTexture1DArray'
   | 'Texture2D'
   | 'ITexture2D'
   | 'UTexture2D'
   | 'Texture2DArray'
   | 'ITexture2DArray'
   | 'UTexture2DArray'
   | 'Texture3D'
   | 'ITexture3D'
   | 'UTexture3D'
   | 'Texture3DArray'
   | 'ITexture3DArray'
   | 'UTexture3DArray'
   | 'TextureCube'
   | 'ITextureCube'
   | 'UTextureCube'
   | 'TextureCubeArray'
   | 'ITextureCubeArray'
   | 'UTextureCubeArray'
   | 'Texture2DRect'
   | 'ITexture2DRect'
   | 'UTexture2DRect'
   | 'Texture2DMS'
   | 'ITexture2DMS'
   | 'UTexture2DMS'
   | 'Texture2DMSArray'
   | 'ITexture2DMSArray'
   | 'UTexture2DMSArray'
   | 'Texture1DShadow'
   | 'Texture2DShadow'
   | 'TextureCubeShadow'
   | 'Texture2DRectShadow'
   | 'Texture1DArrayShadow'
   | 'Texture2DArrayShadow'
   | 'TextureCubeArrayShadow'
   ; 

Whitespace
   : [ \t]+ -> skip
   ;
Newline
   : ('\r' '\n'? | '\n') -> skip
   ;
BlockComment
   : '/*' .*? '*/' -> skip
   ;
LineComment
   : '//' ~ [\r\n]* -> skip
   ;