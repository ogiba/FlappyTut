#include "Engine.h"
#include "IO/Mouse.h"

int Engine::SCREEN_HEIGHT = 768;
int Engine::SCREEN_WIDTH = 1280;
GLFWwindow* Engine::window = NULL;

Engine::Engine(){

}

Engine::~Engine(){

}

bool Engine::initialize(char* windowTitle) {
	if(!glfwInit()) {
		cout << "Error initializing glfw" << endl;
		return false;
	}

	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, windowTitle, NULL, NULL);

	if (window == NULL) {
		cout << "Error creating window" << endl;
		return false;
	}

	//OpenGL setup
	glfwMakeContextCurrent(window);
	int width, height;

	glfwGetFramebufferSize(window, &width, &height);
	glfwSwapInterval(1);

	glfwSetCursorPosCallback(window, Mouse::mousePosCallback);
	glfwSetMouseButtonCallback(window, Mouse::mouseButtonCallback);

	const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
	int xPos = (mode->width - SCREEN_WIDTH) / 2;
	int yPos = (mode->height - SCREEN_HEIGHT) / 2;
	glfwSetWindowPos(window, xPos, yPos);

	//GL setup
	//Viewport
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -10, 10);
	glDepthRange(-10, 10);
	glMatrixMode(GL_MODELVIEW);

	//ALpha blending
	glEnable(GL_ALPHA_TEST);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	return true;
}

void Engine::update() {
	glfwPollEvents();
}

void Engine::beginRender() {
	glClearColor(0, 1, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Engine::endRender() {
	glfwSwapBuffers(window);
}
