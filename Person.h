#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <cstring>
#include "Game_Player.h"

using namespace std;

class Person
{
public:
	Person();
	Person(const string name, const string sex, const int age, const int number);
	~Person();

	int Person_show();

protected:
	int number;		//����
	int age;		//����
	string name;	//����
	string sex;		//�Ա�

private:

};

#endif	// !PERSON_H

