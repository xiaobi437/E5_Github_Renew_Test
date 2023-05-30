#include "Game_Player.h"
#include "Person.h"
#include "Shape.h"

int main(int argv, char *argc[]) {



	cout << "-----------------------" << endl;
	Shape get_shape;
	//圆形
	get_area(new Round(10));
	//锯形
	get_area(new Rectangle(2,5));
	//三角形
	get_area(new Triangle(2,5));
	cout << "-----------------------" << endl;
	cout << "-----------------------" << endl;

	return 0;
}