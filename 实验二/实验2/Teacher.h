#pragma once

#include<iostream>
#include<string>
using namespace std;

class Teacher
{
public:
	Teacher(string name, char sex, int age, string title, string course)
	{
		n = name;
		s = sex;
		a = age;
		t = title;
		c = course;
	}
	void print()
	{
		cout << "name:" << n << endl;
		cout << "sex:" << s << endl;
		cout << "age:" << a << endl;
		cout << "title:" << t << endl;
		cout << "course:" << c << endl;
	}
protected:
	string n;
	char s;
	int a;
	string t;
	string c;
};