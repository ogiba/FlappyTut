#ifndef BOB_MOUSE
#define BOB_MOUSE

#include "GLFW/glfw3.h"

#include <iostream>
#include <string>
using namespace std;

class Mouse {
public:
	static void mousePosCallback(GLFWwindow* window, double _x, double _y);
	static void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods);

	static double getMouseX();
	static double getMouseY();

	static bool buttonDown(int button);
	static bool buttonUp(int button);
	static bool button(int bbutton);
private:
	static double x;
	static double y;

	static bool buttons[];
	static bool buttonsDown[];
	static bool buttonsUp[];
};

#endif // !BOB_MOUSE

