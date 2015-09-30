//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

#ifdef __APPLE__
GLfloat      adjustOcclusionOffset_Radial = 0.5;
#endif
#ifdef WIN32
GLfloat      adjustOcclusionOffset_Radial = 1.5;
#endif

GLfloat      adjustShadow_Pos_RadialOcclusion[]  =  {-0.00109, 0.0000};//_USED TO HIDE HALO

GLuint       UNIFORM_adjustShadowPos_radial_occlusion;

//=====================================================================================
GLfloat      radial_occlusion_OFFSET_1[2];
GLfloat      radial_occlusion_OFFSET_2[2];
GLfloat      radial_occlusion_OFFSET_3[2];
GLfloat      radial_occlusion_OFFSET_4[2];
//----------
GLuint       UNIFORM_OFFSET_1_radial_occlusion;
GLuint       UNIFORM_OFFSET_2_radial_occlusion;
GLuint       UNIFORM_OFFSET_3_radial_occlusion;
GLuint       UNIFORM_OFFSET_4_radial_occlusion;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//=====================================================================================
GLuint      radial_occlusion_SHADER_VERTEX;                                                                                 
GLuint      radial_occlusion_SHADER_FRAGMENT;                                                                               
GLuint      radial_occlusion_SHADER;     

//-------------------------------------------------------------------------------------
GLuint      UNIFORM_TEXTURE_radial_occlusion_GENERIC;
GLuint      UNIFORM_TEXTURE_radial_occlusion_DEPTH;
GLuint      UNIFORM_TEXTURE_radial_occlusion_NORMALS;
