#pragma once
#include<SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
class Bird
{
private:
	sf::Texture textures[2];
	const int gravity;
	const int flap_speed;
	float velocity_y;
	int anim_counter, texture_switch;
	bool should_fly;
	sf::SoundBuffer flap_buffer;  // For flap sound
	sf::Sound flap_sound;
public:
	sf::Sprite bird_sprite;
	Bird();
	void setShouldFly(bool);
	void flapBird(sf::Time&);
	void resetBirdPosition();
	void update(sf::Time&); //To move the sparrow
	float getRightBound();

}; 
