#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
public:
	static int a;
	Person();
	Person(const string name, const string sex, const int age, const int number);
	~Person();

    int Person_show();
	int Person_set(const string name, const string sex, const int age, const int number);

protected:
	int number;		//号码
	int age;		//年龄
	string name;	//名字
	string sex;		//性别

private:

};

#endif	// !PERSON_H

