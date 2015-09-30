//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    //-----------------------------------------------------------------    
    if(normals_FBO != 0)                                                                                                      
    {                                                                                                                                              
        glDeleteFramebuffers(1, &normals_FBO);
        normals_FBO = 0;                                                                                                  
    }                    
    //-----------------------------------------------------------------
    if(normals_FBO_COLOR_TEXTURE  != 0)                                                                                                    
    {                                                                                                                                              
        glDeleteTextures(1, &normals_FBO_COLOR_TEXTURE);                                                                               
        normals_FBO_COLOR_TEXTURE  = 0;                                                                                                
    } 
    //-----------------------------------------------------------------
    if(normals_FBO_RAW_DEPTH_TEXTURE != 0)                                                                                                      
    {                                                                                                                                              
        glDeleteTextures(1, &normals_FBO_RAW_DEPTH_TEXTURE);                                                                                
        normals_FBO_RAW_DEPTH_TEXTURE = 0;                                                                                                  
    }                                                                                                                                              
    //-----------------------------------------------------------------   
