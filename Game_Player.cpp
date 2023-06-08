#include "Game_Player.h"
#include "Person.h"

Game_Player::Game_Player()
{
	cout << "Game_Player����" << endl;
}

Game_Player::Game_Player(const string name, const string sex, const int age, const int number, const int score) :Person(name,sex,age,number)
{
	cout << "Game_Player����" << endl;
	this->score = score;
}

Game_Player::~Game_Player()
{
	cout << "~Game_Player����" << endl;
}

int Game_Player::Game_Player_set(const string name, const string sex, const int age, const int number, const int score)
{
	//Person_set(name, sex, age, number);

	this->name = name;
	this->sex = sex;
	this->age = age;
	this->number = number;

	this->score = score;

	return 0;
}


int Game_Player::Game_Player_show()
{
	Person_show();
	printf("score:%d\n",this->score);
	return 0;
}

