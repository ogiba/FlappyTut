#include "Sprite.h"

Sprite::Sprite() {
	xPos = 0;
	yPos = 0;
	texture = Texture();
}

Sprite::Sprite(string imagePath) {
	texture = Texture(imagePath);
	xPos = 0;
	yPos = 0;
}

Sprite::Sprite(string imagePath, float _xPos, float _yPos) {
	texture = Texture(imagePath);
	xPos = _xPos;
	yPos = _yPos;
}

void Sprite::update() {

}

void Sprite::render() {

}