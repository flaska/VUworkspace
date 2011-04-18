#include "qt.h"
#include <iostream>

GLPainter::GLPainter(){
	width = 512;
	height = 512;
	filename = "Picture.raw" ;
	Brightness = 1.0;
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
	free(TextureData);
}

void GLPainter::initGL() {

}

void GLPainter::Paint(float Brightness){

}


