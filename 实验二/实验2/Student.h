#pragma once

#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	Student(string name, char sex, int age, int number, string department)
	{
		n = name;
		s = sex;
		a = age;
		num = number;
		dep = department;
	}

void print()
{
	cout << "name:" << n << endl;
	cout << "sex:" << s << endl;
	cout << "age:" << a << endl;
	cout << "number:" << num << endl;
	cout << "department:" << dep << endl;
}
protected:
	string n;
	char s;
	int a;
	int num;
	string dep;
};