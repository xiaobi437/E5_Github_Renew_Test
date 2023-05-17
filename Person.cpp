#include "Game_Player.h"
#include "Person.h"

Person::Person()
{
	cout << "Person£¨£©" << endl;
}

Person::Person(const string name, const string sex, const int age, const int number)
{
	cout << "Person£¨´ø²ÎÊı£©" << endl;
	this->name = name;
	this->sex = sex;
	this->age = age;
	this->number = number;
}


Person::~Person()
{
	cout << "~Person£¨£©" << endl;
}

int Person::Person_show()
{
	//cout << "name:" << this->name << "\nsex:" << this->sex << "\nage:" << this->age << "\nnumber:" << this->number << endl;
	printf("name:%s, sex:%s, age:%d, number:%d\n",this->name.c_str(),this->sex.c_str(),this->age,this->number);

	return 0;
}
