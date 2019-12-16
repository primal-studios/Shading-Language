shader TestShader 
{ 
    pass TestPass
    {
        code
        {
            interface VertexInput
            {
                vec3 position;
                float kek : POSITION;
            };
        };
    };
};