//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    //===================================================================================================================
 
    glGenFramebuffers( 1, &radial_OCC_01_FBO);
    
    glGenTextures(1, &radial_OCC_01_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, radial_OCC_01_TEXTURE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth/scale_radial_OCC_FBO, (GLsizei)viewHeight/scale_radial_OCC_FBO, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //---------------------------------------------------------------
    #ifdef __APPLE__
        //glGenerateMipmap(GL_TEXTURE_2D);
    #endif    
    #ifdef WIN32
        //glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
    #endif     
    //---------------------------------------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, radial_OCC_01_FBO);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, radial_OCC_01_TEXTURE, 0);

    //===================================================================================================================
   

    glGenFramebuffers( 1, &radial_OCC_02_FBO);
    
    glGenTextures(1, &radial_OCC_02_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, radial_OCC_02_TEXTURE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth/scale_radial_OCC_FBO, (GLsizei)viewHeight/scale_radial_OCC_FBO, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //---------------------------------------------------------------
    #ifdef __APPLE__
        //glGenerateMipmap(GL_TEXTURE_2D);
    #endif    
    #ifdef WIN32
        //glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
    #endif     
    //---------------------------------------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, radial_OCC_02_FBO);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, radial_OCC_02_TEXTURE, 0); 
    //===================================================================================================================
    glGenFramebuffers( 1, &radial_OCC_03_FBO);
    
    glGenTextures(1, &radial_OCC_03_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, radial_OCC_03_TEXTURE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth/scale_radial_OCC_FBO, (GLsizei)viewHeight/scale_radial_OCC_FBO, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //---------------------------------------------------------------
    #ifdef __APPLE__
        //glGenerateMipmap(GL_TEXTURE_2D);
    #endif    
    #ifdef WIN32
        //glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
    #endif     
    //---------------------------------------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, radial_OCC_03_FBO);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, radial_OCC_03_TEXTURE, 0); 
    //===================================================================================================================
    glGenFramebuffers( 1, &radial_OCC_04_FBO);
    
    glGenTextures(1, &radial_OCC_04_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, radial_OCC_04_TEXTURE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth/scale_radial_OCC_FBO, (GLsizei)viewHeight/scale_radial_OCC_FBO, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //---------------------------------------------------------------
    #ifdef __APPLE__
        //glGenerateMipmap(GL_TEXTURE_2D);
    #endif    
    #ifdef WIN32
        //glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
    #endif     
    //---------------------------------------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, radial_OCC_04_FBO);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, radial_OCC_04_TEXTURE, 0); 
    //====================================================================================================
    
//#################################################################################################################    
    
    
    //========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
                                                                  
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"WHITE.png"].CGImage;           
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData,                                      
                                                     width,                                           
                                                     height,                                          
                                                     8,                                               
                                                     width * 4,                                       
                                                     CGImageGetColorSpace(spriteImage),               
                                                     kCGImageAlphaNoneSkipLast);                      
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &blank_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, blank_TEXTUREMAP);                              
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
            free(spriteData);                                                                         
        }                                                                                             
//----                                                                                                
#endif                                                                                                
//========================================================================                            
    //-----------------------------------------------------------------------------------                                              
    #ifdef WIN32                                                                                                                       
    loadTexture("_SHADERS/WHITE.png",          blank_TEXTUREMAP);    
    #endif        
