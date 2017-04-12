#include "Engine/Engine.h"

#include <iostream>
using namespace std;

int main() {
	cout << "hello World!" << endl;

	Engine engine;

	engine.initialize("Test!");

	while (true) {
		engine.update();
		engine.render();
	}
	return 0;
}