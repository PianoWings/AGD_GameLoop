#include "pch.h"
#include "../GameLoop/Vector.h"
#include "../GameLoop/Window.h"
#include <SFML/Graphics.hpp>

TEST(Vector, Init2) {
	Vector v(1.0f, 2.0f);
	EXPECT_EQ(v.x, 1.0f);
	/*EXPECT_TRUE(true);*/
}

TEST(Window, Init) {
	Window w;
//	sf::RenderWindow wr;

}