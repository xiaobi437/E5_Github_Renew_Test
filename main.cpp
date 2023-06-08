#include "Game_Player.h"
#include "Person.h"
#include "Shape.h"


class Dog {
public:
	virtual void show() {
		cout << "Dog_show()" << endl;
	}

};
class Cat :public Dog{
public:
	void show() {
		Dog::show();
		cout << "Cat_show()" << endl;
	}

};

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

	Person tom;
	tom.Person_set("tom", "boy", 1, 1);
	tom.Person_show();

	cout << "-----------------------" << endl;
	Dog* p = new Cat();
	p->show();

	return 0;
}