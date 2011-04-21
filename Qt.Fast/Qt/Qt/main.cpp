#include <time.h>
#include <iostream>
#include "qt.h"

time_t start,end;

int main(int argc, char *argv[]) {
	QApplication App(argc, argv);
	QImage MemoryImage("D:/Vyzkumak/Workspace/Qt/Qt/Debug/Picture.png");
	QImage ShowImage("D:/Vyzkumak/Workspace/Qt/Qt/Debug/Picture.png");
	QLabel label;
	label.setPixmap(QPixmap::fromImage(ShowImage));
	label.show();

    int w = MemoryImage.width();
    int h = MemoryImage.height();
	start = time (NULL);
	qreal H, S, V;
	QColor Color;
	qreal cont=0;
	QRgb *Rgb;
	qreal v;
	for (int j=0; j<10; j++){
		cont = 0;
		for (int i=0; i<99; i++){
			cont=cont+0.01;
			ShowImage = MemoryImage;
			for ( int y = 0; y < h; y++ ){
				Rgb = (QRgb*)ShowImage.scanLine(y);
				for ( int x = 0; x < w; x++ ){
					Rgb[x] = qRgb(qRed(Rgb[x])*cont,qGreen(Rgb[x])*cont,qBlue(Rgb[x])*cont);
				}
			}
			label.setPixmap(QPixmap::fromImage(ShowImage));
			label.repaint();
		}
	}
	end = time (NULL);
	int length = (int) (end - start);
	std::cout << "Length of rendering 100 frames was: " << length << " seconds.\n";
	std::cout << "Average fps is: " << 100. / (float)length << " frames per seconds.\n";
	App.exec();
}
