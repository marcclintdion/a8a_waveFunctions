    if(ball_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &ball_NORMALMAP);    
        ball_NORMALMAP = 0;                      
    }                                                              
    if(ball_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &ball_TEXTUREMAP);   
        ball_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(ball_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &ball_VBO);           
        ball_VBO  = 0;                           
    }                                                              
    if(ball_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &ball_INDICES_VBO);   
        ball_INDICES_VBO  = 0;                   
    }                                                              
