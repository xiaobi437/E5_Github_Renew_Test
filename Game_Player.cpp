#include "Game_Player.h"

Game_Player::Game_Player()
{

}

Game_Player::Game_Player(const int score)
{

	this->score = score;
}

Game_Player::~Game_Player()
{
}

int Game_Player::Game_Player_show()
{
	printf("score:%d\n",this->score);
	return 0;
}
