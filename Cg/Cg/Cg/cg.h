#include <QtOpenGL/QtOpenGL>
#include <fstream>
#include <Cg/cg.h>
#include <Cg/cgGL.h>


class GLWindow : public QGLWidget {
	Q_OBJECT
public:
	GLWindow();
	~GLWindow();
protected:
	void wheelEvent ( QWheelEvent * );
signals:
	void wheelSignal( QWheelEvent * );
};


class GLPainter : public QObject {
	Q_OBJECT
public:
	GLPainter();
	void LoadTextureDataFromFile();
	void PrepareShaders();
	void PrepareTexture();
	void initGL();
	void Paint();
public slots:
	void changeBrightness( float );
private:
	int width;
	int height;
	char * filename;
	char * TextureData;
	std::ifstream ifs;
	GLuint TextureIdentifier;
	CGcontext Context;
	CGprofile Profile;
	CGprogram Program;
	CGparameter hDecal;
	CGparameter hBright;
	float Brightness;
};

