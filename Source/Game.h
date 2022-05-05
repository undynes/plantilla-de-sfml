#pragma once
#include "System.h"
class Game
{
public:
	void init(System dir_sys);
	void update();
	void keyboard();
	void mouse();
	void render();
private:
	sf::RenderWindow window;
	std::vector<sf::Sprite> sprites;

	System* ptr_sys;
};

