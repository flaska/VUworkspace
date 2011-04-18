#include "opengl.h"

GLWindow::GLWindow(){
    setMouseTracking (true);
}

GLWindow::~GLWindow(){
}


void GLWindow::wheelEvent ( QWheelEvent * event ) {
	emit wheelSignal(event);
}

#include <iostream>

GLPainter::GLPainter(){
	width = 512;
	height = 512;
	filename = "Picture.raw" ;
	Brightness = 1.0;
	glViewport(0,0, 800, 800);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-1,1,-1,1,0.1,1);
	glMatrixMode(GL_MODELVIEW);
}

void GLPainter::LoadTextureDataFromFile() {
	TextureData = (char*) malloc(width * height * 3);
	FILE * file;
	file = fopen( "Picture.raw", "rb" );
	width = 256;
	height = 256;
	fread( TextureData, width * height * 3, 1, file );
	fclose( file );

}

void GLPainter::PrepareTexture() {
	glGenTextures( 1, &TextureIdentifier );
	glBindTexture( GL_TEXTURE_2D, TextureIdentifier );
	glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST );
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT );
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT );
	gluBuild2DMipmaps( GL_TEXTURE_2D, 3, width, height, GL_RGB, GL_UNSIGNED_BYTE, TextureData );
	glEnable( GL_TEXTURE_2D );
	glBindTexture( GL_TEXTURE_2D, TextureIdentifier );
	free( TextureData );
}

void GLPainter::initGL() {
	glClear( GL_COLOR_BUFFER_BIT );
	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();
	glFrustum( -1, 1, -1, 1, 1, 1000 );
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();
	glTranslatef( 0, 0, -1.5 );
}

void GLPainter::Paint(float Brightness){
	glBegin(GL_POLYGON);
		glColor3f (Brightness, Brightness, Brightness);
		glTexCoord3f(0.0,0.0,0.0);	glVertex3f( -1.0, -1.0, 0.0 );
		glTexCoord3f(0.0,1.0,0.0);	glVertex3f( -1.0,  1.0, 0.0 );
		glTexCoord3f(1.0,1.0,0.0);	glVertex3f(  1.0,  1.0, 0.0 );
		glTexCoord3f(1.0,0.0,0.0);	glVertex3f(  1.0, -1.0, 0.0 );
	glEnd();
}


