#include <SFML/Graphics.hpp>
#include"Cvijet.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Bok, profesore!");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);
	sf::Clock clock;
	float deltaTime;
	sf::Time elapsed;
	while (window.isOpen())
	{
		elapsed = clock.restart(); // Restart clock and get elapsed time
		deltaTime = elapsed.asMilliseconds() * 500;
		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		cvijet.draw_flower();
		cvijet.draw_sun(deltaTime);
		window.display();
	}

	return 0;
}