    renderNormals_SHADER = glCreateProgram();                                                                                     
        //----------------------------------------------------                                                                  
    const GLchar *vertexSource_renderNormals =                                                                                    

    " #define highp                                                                                                             \n" 
    
    //--------------------------------------------     
    "    attribute       vec4   position;                                                                                       \n" 
    "    attribute       vec3   normal;                                                                                         \n" 
    "    attribute       vec2   textureCoords;                                                                                  \n" 
    //--------------------------------------------   
    "    uniform         mat4   projection;                                                                                     \n" 
    "    uniform         mat4   view;                                                                                           \n"         
    "    uniform         mat4   modelWorld;                                                                                     \n"         
    "    uniform         mat4   view_Rotate;                                                                                    \n"            
    //--------------------------------------------
    "    varying  highp  vec2   varTexcoord;                                                                                    \n" 
    //--------------------------------------------

    //===============================================================================================
    
    " void main()                                                                                                               \n" 
    " {                                                                                                                         \n" 
          //-------------------------------------------------------------------------------
    "     varTexcoord             =  textureCoords;                                                                             \n" 
          //===============================================================================
    "     gl_Position             =  projection * view * view_Rotate  * modelWorld * position;                    \n" 
    
    " } \n";   
    
    //===================================================================================================================================                 

    const GLchar *fragmentSource_renderNormals =                                                                                  

    "#ifdef GL_ES                                                                                                                  \n" 
    "#else                                                                                                                         \n" 
    "#define highp                                                                                                                 \n" 
    "#endif                                                                                                                        \n" 
    
    
    
    
    
    //--------------------------------------------
    "    uniform  sampler2D     NormalMap;                                                                                         \n" 
    //--------------------------------------------
    "    varying  highp  vec2   varTexcoord;                                                                                       \n" 

    //--------------------------------------------     
    //=======================================================================================================================                      
  
    "void main()                                                                                                                    \n" 
    "{                                                                                                                              \n" 

    //"    NormalTex                =  texture2D(NormalMap,  varTexcoord.xy).xyz;                                                     \n" 
    //"    NormalTex                =  normalize((NormalTex  - 0.5));                                                                 \n" 
    //"    NdotL1                   =  max(dot(NormalTex, normalize(lightPosition_PASS_01.xyz - normalize(gl_FragCoord.xyz))), 0.0);  \n" 

  
    
    "    gl_FragColor           =   highp vec4(texture2D(NormalMap,  varTexcoord.xy).xyz, 1.0);                                                                                    \n"     
  
    
    
    
    "}\n";

    
        
        
        
    //=======================================================================================================================                   

        renderNormals_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( renderNormals_SHADER_VERTEX, 1, &vertexSource_renderNormals, NULL );                                        
        glCompileShader( renderNormals_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        renderNormals_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( renderNormals_SHADER_FRAGMENT, 1, &fragmentSource_renderNormals, NULL );                                    
        glCompileShader(renderNormals_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( renderNormals_SHADER, renderNormals_SHADER_VERTEX );                                                        
        glAttachShader( renderNormals_SHADER, renderNormals_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(renderNormals_SHADER,   0, "position");                                                              
        glBindAttribLocation(renderNormals_SHADER,   1, "normal");                                                            
        glBindAttribLocation(renderNormals_SHADER,   2, "textureCoords");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( renderNormals_SHADER_VERTEX);                                                                             
        glDeleteShader( renderNormals_SHADER_FRAGMENT);                                                                           
        glLinkProgram(renderNormals_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    
        UNIFORM_PROJECTION_renderNormals                         = glGetUniformLocation(renderNormals_SHADER, "projection");  
        UNIFORM_VIEW_renderNormals                               = glGetUniformLocation(renderNormals_SHADER, "view");                  
        UNIFORM_MODELWORLD_renderNormals                         = glGetUniformLocation(renderNormals_SHADER, "modelWorld");          
        UNIFORM_VIEW_ROTATE_renderNormals                        = glGetUniformLocation(renderNormals_SHADER, "view_Rotate");             
        UNIFORM_MOVESET_MATRIX_renderNormals                     = glGetUniformLocation(renderNormals_SHADER, "moveSetMatrix");          
        //-------------------------------

        UNIFORM_TEXTURE_DOT3_renderNormals                       = glGetUniformLocation(renderNormals_SHADER, "NormalMap");                  
