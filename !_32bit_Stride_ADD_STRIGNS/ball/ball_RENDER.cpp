setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, ball_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ball_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, ball_POSITION[0],                   
                          ball_POSITION[1],                   
                          ball_POSITION[2]);                  

    Rotate(modelWorld,    ball_ROTATE[0],                     
                          ball_ROTATE[1],                     
                          ball_ROTATE[2],                     
                          ball_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, ball_ROTATE[0],                     
                          ball_ROTATE[1],                     
                          ball_ROTATE[2],                     
                          ball_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, ball_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, ball_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 9216, GL_UNSIGNED_INT, 0);           

