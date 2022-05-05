#include "Menu.h"

void Menu::init(System dir_sys)
{
	ptr_sys = &dir_sys;
}

void Menu::update()
{

}

void Menu::mouse()
{

}

void Menu::keyboard()
{

}

void Menu::render()
{
	for (int i = 0; i < sprites.size; i++)
	{
		ptr_sys->window->draw(sprites[i]);
	}
}
