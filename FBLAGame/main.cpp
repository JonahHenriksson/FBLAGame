#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

int main()
{
	sf::Clock clock1;
	sf::Time time1;
	
	sf::RenderWindow window(sf::VideoMode(800, 600),
		"Future Business Leaders of America: A Year in the Life", sf::Style::Default);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		time1 = clock1.getElapsedTime().asSeconds;
		
		window.display();
	}

	return 0;
}