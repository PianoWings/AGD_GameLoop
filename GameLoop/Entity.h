#pragma once
#include "Window.h"
#include "Vector.h"

class Entity
{

public:
	Entity();

	~Entity();

	Window* window;

	void draw();

	void move();
private:

	Vector movement;
	sf::Texture texture;
	sf::Sprite sprite;

};
