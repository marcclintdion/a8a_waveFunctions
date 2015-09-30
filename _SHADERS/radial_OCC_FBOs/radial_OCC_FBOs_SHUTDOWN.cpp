//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
    
    //====================================================== 
    if(radial_OCC_01_FBO != 0)                                                                                                      
    {                                                                                                                                              
        glDeleteFramebuffers(1, &radial_OCC_01_FBO);
        radial_OCC_01_FBO = 0;                                                                                                  
    }                    
    //--------------------------------------------
    if(radial_OCC_01_TEXTURE  != 0)                                                                                      
    {                                                                                                              
        glDeleteTextures(1, &radial_OCC_01_TEXTURE);                                                                 
        radial_OCC_01_TEXTURE  = 0;                                                                                  
    }                                                                                                              
    //======================================================
    if(radial_OCC_02_FBO != 0)                                                                                                      
    {                                                                                                                                              
        glDeleteFramebuffers(1, &radial_OCC_02_FBO);
        radial_OCC_02_FBO = 0;                                                                                                  
    }                    
    //-------------------------------------------
    if(radial_OCC_02_TEXTURE  != 0)                                                                                      
    {                                                                                                              
        glDeleteTextures(1, &radial_OCC_02_TEXTURE);                                                                 
        radial_OCC_02_TEXTURE  = 0;                                                                                  
    }                                                                                                              
    //======================================================

