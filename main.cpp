#include "Game_Player.h"
#include "Person.h"
#include "Shape.h"

int main(int argv, char *argc[]) {

	Person Tom("Tom","man",10,666);
	Tom.Person_show();

	Game_Player Jack("Jack", "man", 10, 666,99);
	Jack.Game_Player_show();

	Game_Player Rose;
	Rose.Game_Player_set("Rose", "woman", 12, 666, 99);
	Rose.Game_Player_show();

	cout << "-----------------------" << endl;
	Shape get_shape;
	//圆形
	get_area(new Round(10));
	//锯形
	get_area(new Rectangle(2,5));
	//三角形
	get_area(new Triangle(2,5));
	cout << "-----------------------" << endl;

	return 0;
}