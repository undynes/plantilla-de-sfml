#include "Game.h"

void Game::init(System dir_sys)
{
	ptr_sys = &dir_sys;
}

void Game::update()
{

}

void Game::mouse()
{

}

void Game::keyboard()
{

}

void Game::render()
{
	for (int i = 0; i < sprites.size; i++)
	{
		ptr_sys->window->draw(sprites[i]);
	}
}
