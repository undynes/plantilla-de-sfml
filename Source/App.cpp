#include "App.h"

int App::run()
{
	sf::ContextSettings stt;
	stt.antialiasingLevel = 7;
	sys.window = new sf::RenderWindow(sf::VideoMode(980, 580), "window",
		sf::Style::Titlebar | sf::Style::Close,
		stt
	);
	Menu menu;
	menu.init(sys);
	sf::Clock deltaClock;

	while (sys.window->isOpen())
	{
		sys.deltaTime = deltaClock.restart().asSeconds();
		while (sys.window->pollEvent(sys.event))
		{
			switch (sys.event.type)
			{
			case sf::Event::Closed:
				sys.window->close();
			case sf::Event::KeyPressed:
				if (sys.scene_runing == menu_runing) { menu.keyboard();}
			case sf::Event::MouseButtonPressed:
				if (sys.scene_runing == menu_runing) { menu.mouse();}
				break;
			}
		}
		if (sys.scene_runing == menu_runing) { menu.update();}
		sys.window->clear();
		if (sys.scene_runing == menu_runing) { menu.render();}
		sys.window->display();
	}
	return EXIT_SUCCESS;
}
