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
	int number;		//����
	int age;		//����
	string name;	//����
	string sex;		//�Ա�

private:

};

#endif	// !PERSON_H

