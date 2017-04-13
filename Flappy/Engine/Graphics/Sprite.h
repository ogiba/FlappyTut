#ifndef BOB_SPRITE
#define BOB_SPRITE

#include "GLFW/glfw3.h"
#include "Texture.h"

#include <iostream>
#include <string>
using namespace std;

class Sprite {
public:
	Sprite();
	Sprite(string imagePath);
	Sprite(string imagePath, float _xPos, float _yPos);

	void update();
	void render();

	void setPos(float x, float y);

private:
	Texture texture;
	float xPos;
	float yPos;
};

#endif // !BOB_SPRITE

