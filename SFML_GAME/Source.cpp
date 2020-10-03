include <SFML / Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1080, 720), "Game from scratch!");

	////// Circle
	sf::CircleShape collision(100.f);
	collision.setPosition({ 200.f, 200.f });
	collision.setFillColor(sf::Color::Red);

	////// Texture
	sf::Texture playerTexture;
	if (!playerTexture.loadFromFile("res/img/healer_f.png"))
	{
		std::cout << "Load failed" << std::endl;
	}

	////// Sprite
	sf::Sprite shapeSprite;
	shapeSprite.setTexture(playerTexture);
	shapeSprite.setTextureRect(sf::IntRect(0, 0, 32, 38));

	while (window.isOpen())
	{
		window.draw(shapeSprite);
		window.draw(collision);
		window.display();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
		window.clear();
	}
	return 0;
}