#include "Game_Player.h"
#include "Person.h"

int main(int argv, char *argc[]) {

	Person Tom("Tom","man",10,666);
	Tom.Person_show();

	Game_Player Jack("Jack", "man", 10, 666,99);
	Jack.Game_Player_show();



	return 0;
}