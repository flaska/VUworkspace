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

	start = time (NULL);
	for (int j=0; j<10; j++){
		float Brightness=0.0;
		for (int i=0; i<1000; i++){
			Brightness = Brightness+0.001;
			gl->Paint(Brightness);
			w.updateGL();
		}
	}
	end = time (NULL);

	int length = (int) (end - start);

	std::cout << "Length of rendering 10 000 frames was: " << length << " seconds.\n";
	std::cout << "Average fps is: " << 10000. / (float)length << " frames per seconds.\n";

	return a.exec();
}
