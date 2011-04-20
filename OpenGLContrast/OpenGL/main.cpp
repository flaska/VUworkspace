#include <time.h>
#include <iostream>
#include "opengl.h"

time_t start,end;

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	
	GLWindow w;
	w.setWindowTitle("Cg toolkit, nastaveni svetlosti");
	w.setFixedSize(800,800);
	w.show();
		
	GLPainter * gl;
	gl = new GLPainter;
	gl->LoadTextureDataFromFile();
	gl->PrepareTexture();
	gl->initGL();
	gl->Paint();
	return a.exec();
}
