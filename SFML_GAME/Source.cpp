#include <SFML/Graphics.hpp>
#include <iostream>

struct Prince
{
	sf::Texture Princee;
}character;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1080, 720), "Watcharapol Yotadee 63010870");
	// INPUT_File
	if (!character.Princee.loadFromFile("character/Prince.png"))
	{
		std::cout << "Load failed" << std::endl;
	}

	////// Sprite
	sf::Sprite shapeSprite;
	shapeSprite.setTexture(character.Princee);
	shapeSprite.setTextureRect(sf::IntRect(0,0, 32, 38));

	while (window.isOpen())
	{
		window.draw(shapeSprite);
		window.display();
		// GOGO
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			shapeSprite.move(.1f, 0.f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			shapeSprite.move(-.1f, 0.f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			shapeSprite.move(0.f, -.1f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			shapeSprite.move(0.f, .1f);
		}
		//STOP
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
		window.clear();
	}
	return 0;
}