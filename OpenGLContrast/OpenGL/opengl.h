#include <QtOpenGL/QtOpenGL>
#include <fstream>

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
	void PrepareTexture();
	void initGL();
	void Paint();
private:
	int width;
	int height;
	char * filename;
	char * TextureData;
	std::ifstream ifs;
	GLuint TextureIdentifier;
	float Brightness;
};

