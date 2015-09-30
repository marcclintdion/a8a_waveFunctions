//=======================================================================================================================

void loadTexture(char *textureFileName, GLuint &textureMapID)	
{
	FREE_IMAGE_FORMAT fifmt = FreeImage_GetFileType(textureFileName, 0);

	FIBITMAP *dib = FreeImage_Load(fifmt, textureFileName,0);

	FIBITMAP *temp = dib;
    dib = FreeImage_ConvertTo32Bits( temp); // TARON!! MAYBE YOU SHOULD TAKE THIS OUT
    FreeImage_Unload(temp);	 
	
    if( dib != NULL )
	{
        
        glGenTextures( 1, &textureMapID );
		glBindTexture( GL_TEXTURE_2D, textureMapID );
        
         
        BYTE *pixels = (BYTE*)FreeImage_GetBits(dib);
        
        //glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, FreeImage_GetWidth(dib), FreeImage_GetHeight(dib), 0, GL_BGRA, GL_UNSIGNED_BYTE, pixels);		
      
        ConfigureAndLoadTexture(pixels,  FreeImage_GetWidth(dib),  FreeImage_GetHeight(dib) );           
       
       
        free(pixels);
        FreeImage_Unload(dib);
	}

}
