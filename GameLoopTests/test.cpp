#include "pch.h"
#include "../GameLoop/Vector.h"
#include "../GameLoop/Window.h"
#include <SFML/Graphics.hpp>

TEST(Vector, Init2) {
	Vector v(1.0f, 2.0f);
	EXPECT_EQ(v.x(), 1.0f);
	/*EXPECT_TRUE(true);*/
}

TEST(Window, Init) {
	Window w;
//	sf::RenderWindow wr;

}

TEST(Window, Init0) {
	Window w;
	EXPECT_FALSE(w.isWindowDone());
	EXPECT_FALSE(w.isWindowFullscreen());
	// This should make you think : what is the default title for your window ? 
	EXPECT_TRUE(w.getTitle() == "Window");
	// And the same here : what is the default window size ?
	EXPECT_EQ(w.getWindowSize().x, 640);
	EXPECT_EQ(w.getWindowSize().y, 480);
}

TEST(Window, Init1) {
	Window w("My Window", sf::Vector2u(1280, 1024));
	EXPECT_FALSE(w.isWindowDone());
	EXPECT_FALSE(w.isWindowFullscreen());
	EXPECT_TRUE(w.getTitle() == "My Window");
	EXPECT_EQ(w.getWindowSize().x, 1280);
	EXPECT_EQ(w.getWindowSize().y, 1024);
}




