
    MultiplyMatrix(modelView, view, modelWorld);
    //----------------------------------------------------------------------------------------------------------    
    LoadIdentity(shadowLight_textureMatrix);
    MultiplyMatrix(shadowLight_textureMatrix, biasMatrix, light_projection);    
    MultiplyMatrix(shadowLight_textureMatrix, shadowLight_textureMatrix, light_view);    //MULTIPLY THESE TO A TEMP MATRIX TO AVOID ROUND OFF ERRORS  
   
    //----------------------------------------------------------------------------------------------------------
    LoadIdentity(lightMatrix);
    InvertMatrix(lightMatrix, modelRotation);
    //----------------------------------------------------------------------------------------------------------

 
 glUseProgram(renderNormals_SHADER);
          //------------------------------------------------------------------------------
          glVertexAttribPointer(0,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(0));
          glEnableVertexAttribArray(0);
          glVertexAttribPointer(1,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(12));
          glEnableVertexAttribArray(1);
          glVertexAttribPointer(2,     2, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(24));
          glEnableVertexAttribArray(2);
          //------------------------------------------------------------------------------------------------
          glUniformMatrix4fv(UNIFORM_PROJECTION_renderNormals,                       1, 0,    projection);
          glUniformMatrix4fv(UNIFORM_VIEW_renderNormals,                             1, 0,    view);          
          glUniformMatrix4fv(UNIFORM_MODELWORLD_renderNormals,                       1, 0,    modelWorld);          
          glUniformMatrix4fv(UNIFORM_VIEW_ROTATE_renderNormals,                      1, 0,    view_rotate);  
          glUniformMatrix4fv(UNIFORM_MOVESET_MATRIX_renderNormals,                   1, 0,    moveSetMatrix);            
         //------------------------------------------------------------------------------------------------

          //-------------------------------------------------------------------------------------------------
          glUniform1i(UNIFORM_ShadowTexture_renderNormals,  3);


          glUniform1i(UNIFORM_TEXTURE_DOT3_renderNormals,   1);
          glUniform1i(UNIFORM_TEXTURE_renderNormals,        0);
    //====================================================================================================================

//---------------------------------------------------------------
glActiveTexture ( GL_TEXTURE3 );                                                                                                                                          
glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture);                                                                                                                          

