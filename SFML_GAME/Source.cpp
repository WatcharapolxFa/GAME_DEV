#include <SFML/Graphics.hpp>
#include <iostream>

struct Prince
{
	sf::Texture Princee;
}character;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1080,720), "Watcharapol Yotadee 63010870");
	// INPUT_File
	if (!character.Princee.loadFromFile("character/Prince.png"))
	{
		std::cout << "Load failed" << std::endl;
	}

	// Sprite
	sf::Sprite shapeSprite;
	shapeSprite.setTexture(character.Princee);
	



	int spriteSizeX = character.Princee.getSize().x / 5;
	int spriteSizeY = character.Princee.getSize().y / 8;
	shapeSprite.setTextureRect(sf::IntRect(0, 0, spriteSizeX, spriteSizeY));

	int animationFrame = 0;

	while (window.isOpen())
	{
		window.draw(shapeSprite);
		window.display();
		// GOGO
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			shapeSprite.move(.1f, 0.f);
			shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3, spriteSizeX, spriteSizeY));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			shapeSprite.move(-.1f, 0.f);
			shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 32));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			shapeSprite.move(0.f, -.1f);
			shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			shapeSprite.move(0.f, .1f);
			shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 32));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
		animationFrame++;

		if (animationFrame >= 2) {
			animationFrame = 0;
		}
		window.clear();
	}
	return 0;
}