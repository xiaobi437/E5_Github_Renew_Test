#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include <iostream>
#include <cstring>
#include "Person.h"


using namespace std;

class Game_Player :protected Person
{
public:
	Game_Player();
	Game_Player(const string name, const string sex, const int age, const int number, const int score);
	~Game_Player();

	int Game_Player_set(const string name, const string sex, const int age, const int number, const int score);

	int Game_Player_show();
protected:
	int score;
private:
};



#endif // !GAME_PLAYER_H



