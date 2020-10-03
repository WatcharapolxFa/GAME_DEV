#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1080, 720), "Game from scratch!");

	sf::CircleShape collision(100.f);
	collision.setPosition({ 200.f, 200.f });
	collision.setFillColor(sf::Color::Red);

	while (window.isOpen())
	{
		window.display();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
		window.clear();
	}
	return 0;
}