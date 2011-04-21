#include <QtOpenGL/QtOpenGL>
#include <fstream>

class GLWindow : public QWidget {
	Q_OBJECT
public:
	GLWindow();
	~GLWindow();
};

class GLPainter : public QObject {
	Q_OBJECT
public:
	GLPainter();
	void LoadTextureDataFromFile();
	void PrepareTexture();
	void initGL();
	void Paint(float);
private:
	int width;
	int height;
	char * filename;
	char * TextureData;
	std::ifstream ifs;
	GLuint TextureIdentifier;
	float Brightness;
};

