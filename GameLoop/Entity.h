#pragma once
#include "Window.h"
#include "Vector.h"

class Entity
{

public:
	Entity();

	~Entity();

	// <FEEDBACK> Entity does not need to hold a pointer to the Window object.
	// It breaks the encapsulation of the Entity. Entities exists independently of them having a window or not.
	// Also, if you have many entities (likely in a game), you will make all those objects unnecessarily larger.
	// Rather than having a pointer to Window, pass the pointer to the functions that needed (see below)>
	Window* window;
	
	// <FEEDBACK> draw() needs to have a Window pointer received as parameter for drawing. 
	void draw();
	
	// <FEEDBACK> move() also needs to have a Window pointer received as parameter for 
	// moving, as we require the window dimensions for bouncing.
	void move();
private:

	Vector movement;
	sf::Texture texture;
	sf::Sprite sprite;

};
