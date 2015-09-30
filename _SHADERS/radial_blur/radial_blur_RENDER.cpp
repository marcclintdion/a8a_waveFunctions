//================================================__BLUR_SHADOW_01__===========================================  
//========================================================================__BLUR_SHADOW_01__===================  
    glBindFramebuffer(GL_FRAMEBUFFER, generic_01_FBO); //generic_01_TEXTURE
        //----------------------------------------------------------------
        //==================================
        radial_blur_OFFSET_1[0] = 9.5 * 1920.0/1080.0;
        radial_blur_OFFSET_1[1] = 3.3;
        
        radial_blur_OFFSET_2[0] = 7.7 * 1920.0/1080.0;
        radial_blur_OFFSET_2[1] = 6.1;        
        
        radial_blur_OFFSET_3[0] = 5.7 * 1920.0/1080.0;
        radial_blur_OFFSET_3[1] = 8.3;          
        
        radial_blur_OFFSET_4[0] = 3.2 * 1920.0/1080.0;
        radial_blur_OFFSET_4[1] = 9.2;          
        //================================== 
       
        shaderNumber = 7;//

        glActiveTexture (GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, drawMainColor_PRIMARY_FBO_COLOR_TEXTURE);         
        #include "../../_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_RENDER.cpp"

        //-------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, 0);

     //=====================================================================
    glBindFramebuffer(GL_FRAMEBUFFER, generic_02_FBO); //generic_02_TEXTURE
        //----------------------------------------------------------------
        //============================
        radial_blur_OFFSET_1[0] = -3.2 * 1920.0/1080.0;
        radial_blur_OFFSET_1[1] =  9.7;
        
        radial_blur_OFFSET_2[0] = -5.2 * 1920.0/1080.0;
        radial_blur_OFFSET_2[1] =  8.5;        
        
        radial_blur_OFFSET_3[0] = -7.5 * 1920.0/1080.0;
        radial_blur_OFFSET_3[1] =  16.5;          
        
        radial_blur_OFFSET_4[0] = -9.3 * 1920.0/1080.0;
        radial_blur_OFFSET_4[1] =  3.7;          
      //============================ 
    
        shaderNumber = 7;
        //---------------


        //---------------
        glActiveTexture (GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, generic_01_TEXTURE);
        #include "../../_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_RENDER.cpp"
        //-------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, 0);

     //=====================================================================
    glBindFramebuffer(GL_FRAMEBUFFER, generic_03_FBO); //generic_02_TEXTURE
        //----------------------------------------------------------------
        //============================
        radial_blur_OFFSET_1[0] = -1.0 * 1920.0/1080.0;
        radial_blur_OFFSET_1[1] = -3.9;
        
        radial_blur_OFFSET_2[0] = -8.0 * 1920.0/1080.0;
        radial_blur_OFFSET_2[1] = -7.0;        
        
        radial_blur_OFFSET_3[0] = -5.5 * 1920.0/1080.0;
        radial_blur_OFFSET_3[1] = -17.4;          
        
        radial_blur_OFFSET_4[0] = -2.0 * 1920.0/1080.0;
        radial_blur_OFFSET_4[1] = -9.7;          
      //============================  
    
        shaderNumber = 7;
        //---------------


        //---------------     
        glActiveTexture (GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, generic_02_TEXTURE);
        #include "../../_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_RENDER.cpp"
        //-------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, 0);

     //=====================================================================
    glBindFramebuffer(GL_FRAMEBUFFER, generic_04_FBO); //generic_02_TEXTURE
        //----------------------------------------------------------------
        //============================
        radial_blur_OFFSET_1[0] =  2.9 * 1920.0/1080.0;
        radial_blur_OFFSET_1[1] = -9.5;
        
        radial_blur_OFFSET_2[0] =  4.2 * 1920.0/1080.0;
        radial_blur_OFFSET_2[1] = -0.8;        
        
        radial_blur_OFFSET_3[0] =  8.2 * 1920.0/1080.0;
        radial_blur_OFFSET_3[1] = -5.7;          
        
        radial_blur_OFFSET_4[0] =  5.3 * 1920.0/1080.0;
        radial_blur_OFFSET_4[1] = -14.6;          
      //============================  
   
        shaderNumber = 7;
        //---------------


        //---------------     
        glActiveTexture (GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, generic_03_TEXTURE);
        #include "../../_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_RENDER.cpp"
        //-------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, 0);



//========================================================================__BLUR_SHADOW_01__===================  
//================================================__BLUR_SHADOW_01__===========================================  










//__SECOND_PASS

/*
//================================================__BLUR_SHADOW_01__===========================================  
//========================================================================__BLUR_SHADOW_01__===================  
    glBindFramebuffer(GL_FRAMEBUFFER, generic_01_FBO); //generic_01_TEXTURE
        //----------------------------------------------------------------
        shaderNumber = 6;//
        //---------------
        horizontalBlur_X = m_fTexelOffset/screenRatio  * adjustBlurOffset;
        horizontalBlur_Y = 0.0;
        //---------------
        glActiveTexture (GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, generic_02_TEXTURE);         
        #include "_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_RENDER.cpp"
        //-------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
    //=====================================================================                               
    glBindFramebuffer(GL_FRAMEBUFFER, generic_02_FBO); //generic_02_TEXTURE
        //----------------------------------------------------------------
        shaderNumber = 6;
        //---------------
        horizontalBlur_X = 0.0;
        horizontalBlur_Y = m_fTexelOffset  * adjustBlurOffset;
        //---------------     
        glActiveTexture (GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, generic_01_TEXTURE);
        #include "_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_RENDER.cpp"
        //-------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
//========================================================================__BLUR_SHADOW_01__===================  
//================================================__BLUR_SHADOW_01__===========================================  
*/
