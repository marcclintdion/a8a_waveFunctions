//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

#ifdef __APPLE__
GLfloat      adjustBlurOffset_Radial = 0.5;
#endif
#ifdef WIN32
GLfloat      adjustBlurOffset_Radial = 1.5;
#endif

GLfloat      adjustShadow_Pos_RadialBlur[]  =  {-0.00109, 0.0000};//_USED TO HIDE HALO

GLuint       UNIFORM_adjustShadowPos_radial_blur;

//=====================================================================================
GLfloat      radial_blur_OFFSET_1[2];
GLfloat      radial_blur_OFFSET_2[2];
GLfloat      radial_blur_OFFSET_3[2];
GLfloat      radial_blur_OFFSET_4[2];
//----------
GLuint       UNIFORM_OFFSET_1_radial_blur;
GLuint       UNIFORM_OFFSET_2_radial_blur;
GLuint       UNIFORM_OFFSET_3_radial_blur;
GLuint       UNIFORM_OFFSET_4_radial_blur;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//=====================================================================================
GLuint      radial_blur_SHADER_VERTEX;                                                                                 
GLuint      radial_blur_SHADER_FRAGMENT;                                                                               
GLuint      radial_blur_SHADER;     

//-------------------------------------------------------------------------------------

GLuint      UNIFORM_TEXTURE_radial_blur;
