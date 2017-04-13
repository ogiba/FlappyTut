#include "Engine/Engine.h"
#include "Engine/Graphics/Sprite.h"

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

		engine.beginRender();
		testSprite.render();
		engine.endRender();
	}
	return 0;
}