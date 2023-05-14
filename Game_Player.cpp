#include "Game_Player.h"
#include "Person.h"

Game_Player::Game_Player()
{

}

Game_Player::Game_Player(const string name, const string sex, const int age, const int number, const int score) :Person(name,sex,age,number)
{

	this->score = score;
}

Game_Player::~Game_Player()
{
}

int Game_Player::Game_Player_show()
{
	Person_show();
	printf("score:%d\n",this->score);
	return 0;
}
