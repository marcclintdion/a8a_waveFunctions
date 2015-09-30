
glUseProgram(radial_blur_SHADER);
    //------------------------------------------------------------------------------
    glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));                                                                                                  
    glEnableVertexAttribArray(0);	                                                                                                                                          
    glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));                                                                                                 
    glEnableVertexAttribArray(1);        
    //------------------------------------------------------------------------------------------------

    glUniform2f(UNIFORM_adjustShadowPos_radial_blur,    adjustShadow_Pos_RadialBlur[0], adjustShadow_Pos_RadialBlur[1]);

    glUniform2f(UNIFORM_OFFSET_1_radial_blur,    radial_blur_OFFSET_1[0], radial_blur_OFFSET_1[1]);
    glUniform2f(UNIFORM_OFFSET_2_radial_blur,    radial_blur_OFFSET_2[0], radial_blur_OFFSET_2[1]);
    glUniform2f(UNIFORM_OFFSET_3_radial_blur,    radial_blur_OFFSET_3[0], radial_blur_OFFSET_3[1]);
    glUniform2f(UNIFORM_OFFSET_4_radial_blur,    radial_blur_OFFSET_4[0], radial_blur_OFFSET_4[1]);
    
    
    glUniform1i (UNIFORM_TEXTURE_radial_blur, 0 );
    //====================================================================================================================
    
    
    
    

