#pragma once
#include "Window.h"
#include "Vector.h"

class Game
{
public:

	// Declare a default constructor and a default destructor.
	Game();
	~Game();

	// Declare a function for handling the input of the user. Returns void and receives no parameters.
	void userInput();

	// Declare a function for updating the game state. Returns void and receives no parameters.
	void update();

	// Declare a function for rendering the game to the screen. Returns void and receives no parameters.
	void Render();

	// Declare a function for returning a pointer to the "window" member of this class. Receives no parameters.
	Window* getwindow();

private:

	// Declare a function for the logic of this demo: moving and bouncing the mushroom against the window limits.
	// This fucntions returns void and receives no parameters.
	void moving();

	// Declare a member variable of type Window for the window of the application. Note this is NOT a pointer to a Window object.
	Window window;

	// Declare a member variable of type Vector (from lab 1), that will indicate the movement of the mushroom per frame. Again, not a pointer.
	Vector movement;

	// Declare two member variables of types sf::Texture and sf::Sprite. The first one will hold the texture of the mushroom, while the
	// second will be the sprite to draw in the window. These are variables, not pointers.
	sf::Texture texture;
	sf::Sprite sprite;
};