#pragma once
#include"Student.h"
class GradStudent : public Student
{
public:
	GradStudent(string name, char sex, int age, int number, string department, string professor) : Student(name, sex, age, number, department)
	{
		pro = professor;
	}
	void print()
	{
		cout << "name:" << n << endl;
		cout << "sex:" << s << endl;
		cout << "age:" << a << endl;
		cout << "number:" << num << endl;
		cout << "department:" << dep << endl;
		cout << "professor:" << pro << endl;
	}
private:
	string pro;
};