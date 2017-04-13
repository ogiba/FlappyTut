#include "Engine/Engine.h"
#include "Engine/Graphics/Sprite.h"
#include "Engine/IO/Mouse.h"

#include <iostream>
using namespace std;

int main() {
	cout << "hello World!" << endl;

	Engine engine;

	engine.initialize("Test!");
	
	Sprite testSprite = Sprite("Assets/Art/Biplane.png", -100, -100);

	while (true) {
		engine.update();

		testSprite.update();

		testSprite.setPos((float)Mouse::getMouseX(), (float)Mouse::getMouseY());

		engine.beginRender(); 
		testSprite.render();
		engine.endRender();
	}
	return 0;
}