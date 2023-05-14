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
	int number;		//号码
	int age;		//年龄
	string name;	//名字
	string sex;		//性别

private:

};

#endif	// !PERSON_H

