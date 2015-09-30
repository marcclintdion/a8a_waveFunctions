
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



    radial_blur_SHADER = glCreateProgram();
    //----------------------------------------------------
    const GLchar *vertexSource_radial_blur =                                                                                    

    " #define highp                                                                                                                             \n"
    
    //--------------------------------------------     
    "    attribute        vec4   position;                                                                                                       \n"
    //--------------------------------------------
   "    uniform   highp   vec2  adjustShadowPos;                                                                                \n"
    
    "    uniform   highp   vec2  offset1;                                                                                \n"
    "    uniform   highp   vec2  offset2;                                                                                \n"
    "    uniform   highp   vec2  offset3;                                                                                \n"
    "    uniform   highp   vec2  offset4;                                                                                \n"


    "    varying   highp   vec2  vTexCoord;                                                                                     \n"

    "    varying   highp   vec2  TexCoord1;                                                                                     \n"
    "    varying   highp   vec2  TexCoord2;                                                                                     \n"
    "    varying   highp   vec2  TexCoord3;                                                                                     \n"
    "    varying   highp   vec2  TexCoord4;                                                                                     \n"
 
  

    //==================================================================================================================================
    
    " void main()                                                                                                               \n" 
    " {                                                                                                                         \n" 

        "   highp vec2 Pos;                                                                                                     \n"
        "   Pos                     =  sign(position.xy);                                                                       \n"
        "   gl_Position             =  highp vec4(Pos.x, Pos.y, 0.0, 1.0);                                                      \n"
        "   vTexCoord               =  Pos * 0.5 + 0.5;                                                                         \n"
        
        "   vTexCoord.xy           +=  adjustShadowPos;                                                                         \n"

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
     
        "     TexCoord1 = vTexCoord + offset1 * 0.0005;                                                                         \n"
      
        "     TexCoord2 = vTexCoord + offset2 * 0.0005;                                                                         \n"
       
        "     TexCoord3 = vTexCoord + offset3 * 0.0005;                                                                         \n"

        "     TexCoord4 = vTexCoord + offset4 * 0.0005;                                                                         \n"

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    " } \n";
    
    //===================================================================================================================================                 

    const GLchar *fragmentSource_radial_blur =                                                                                  

    "#ifdef GL_ES                                                                                                                                \n" 
    "#else                                                                                                                                       \n" 
    "#define highp                                                                                                                               \n" 
    "#endif                                                                                                                                      \n" 
    
    
    //--------------------------------------------
    "    uniform  sampler2D     Texture1;                                                                              \n"
    //--------------------------------------------
    "    varying  highp  vec2   vTexCoord;                                                                                     \n"
    
    "    varying   highp   vec2  TexCoord1;                                                                                     \n"
    "    varying   highp   vec2  TexCoord2;                                                                                     \n"
    "    varying   highp   vec2  TexCoord3;                                                                                     \n"
    "    varying   highp   vec2  TexCoord4;                                                                                     \n"
   
    //--------------------------------------------

    //=======================================================================================================================

   
    "void main()                                                                                                                                \n"
    "{                                                                                                                                          \n"



"    highp vec4 color      =  texture2D(Texture1, vTexCoord);                                                              \n"
//----------------------------------------------------------------

"    highp float shadow    =  texture2D(Texture1, TexCoord1).w * 0.25;                                 \n"
"    shadow               +=  texture2D(Texture1, TexCoord2).w * 0.25;                                 \n"
"    shadow               +=  texture2D(Texture1, TexCoord3).w * 0.25;                                 \n"
"    shadow               +=  texture2D(Texture1, TexCoord4).w * 0.25;                                 \n"




    "    gl_FragColor             =  highp vec4(color.xyz,  shadow);                                                    \n"
 
    "}\n";

    
        
        
        
    //=======================================================================================================================                   

        radial_blur_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( radial_blur_SHADER_VERTEX, 1, &vertexSource_radial_blur, NULL );                                        
        glCompileShader( radial_blur_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        radial_blur_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( radial_blur_SHADER_FRAGMENT, 1, &fragmentSource_radial_blur, NULL );                                    
        glCompileShader(radial_blur_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( radial_blur_SHADER, radial_blur_SHADER_VERTEX );                                                        
        glAttachShader( radial_blur_SHADER, radial_blur_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(radial_blur_SHADER,   0, "position");                                                              
        glBindAttribLocation(radial_blur_SHADER,   1, "normal");                                                            
        glBindAttribLocation(radial_blur_SHADER,   2, "textureCoords");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( radial_blur_SHADER_VERTEX);                                                                             
        glDeleteShader( radial_blur_SHADER_FRAGMENT);                                                                           
        glLinkProgram(radial_blur_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    


    UNIFORM_adjustShadowPos_radial_blur             = glGetUniformLocation(radial_blur_SHADER, "adjustShadowPos");//used to hide halo

    UNIFORM_OFFSET_1_radial_blur                    = glGetUniformLocation(radial_blur_SHADER, "offset1");
    UNIFORM_OFFSET_2_radial_blur                    = glGetUniformLocation(radial_blur_SHADER, "offset2");
    UNIFORM_OFFSET_3_radial_blur                    = glGetUniformLocation(radial_blur_SHADER, "offset3");
    UNIFORM_OFFSET_4_radial_blur                    = glGetUniformLocation(radial_blur_SHADER, "offset4");



    UNIFORM_TEXTURE_radial_blur                     = glGetUniformLocation(radial_blur_SHADER, "Texture1");  





