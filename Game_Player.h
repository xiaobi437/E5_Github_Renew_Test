#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include <iostream>
#include <cstring>

using namespace std;

class Game_Player
{
public:
	Game_Player();
	Game_Player(const int score);
	~Game_Player();

	int Game_Player_show();
protected:
	int score;
private:
};



#endif // !GAME_PLAYER_H



