
#include <iostream>
#include "Teacher.h"
#include "GradStudent.h"

int main()
{
	cout << "*************************************************************" << endl;
	cout << "***************欢迎您来到学生和教师档案查询系统**************" << endl;
	cout << "*************************************************************" << endl;

	int i, j;
	
	Teacher teac( "Sun" , 'm', 27, "js", "mxdx");

	Student stu( "Li" , 'w', 22, 22, "computer");

	GradStudent grad( "Zhang" , 'm', 25, 12, "computer", "hzp");

	cout << endl;

loop:cout << "请输入你要查询的对象：" << endl << "1.教师；2.学生；3.研究生。" << endl;
{
	cin >> i; if (i == 1) teac.print();
	else if (i == 2) stu.print();
	else grad.print();
}

cout << endl ;

cout << "是否继续查询？1.yes 2.no" << endl;  cin >> j;

if (j == 1) goto loop;
else return 0;
}