#ifndef BOB_TEXTURE
#define BOB_TEXTURE

#include "GLFW/glfw3.h"
#include "soil.h"

#include <iostream>
#include <string>
using namespace std;

class Texture {
public:
	Texture();
	Texture(int _id);
	Texture(string path);

	int getID();
	int getWidht();
	int getHeight();
private:
	bool loadImage();

	int id;
	int width;
	int height;
};

#endif // !BOB_TEXTURE