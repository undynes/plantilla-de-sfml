#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

unsigned const short menu_runing = 1;
unsigned const short game_runing = 2;

struct System
{
	sf::RenderWindow* window;
	sf::Event event;

	float deltaTime;
	unsigned short scene_runing = menu_runing;
};
