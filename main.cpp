#include "Game_Player.h"
#include "Person.h"
#include "Shape.h"

int main(int argv, char *argc[]) {



	cout << "-----------------------" << endl;
	Shape get_shape;
	//Բ��
	get_area(new Round(10));
	//����
	get_area(new Rectangle(2,5));
	//������
	get_area(new Triangle(2,5));
	cout << "-----------------------" << endl;
	cout << "-----------------------" << endl;

	return 0;
}