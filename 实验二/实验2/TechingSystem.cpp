
#include <iostream>
#include "Teacher.h"
#include "GradStudent.h"

int main()
{
	cout << "*************************************************************" << endl;
	cout << "***************��ӭ������ѧ���ͽ�ʦ������ѯϵͳ**************" << endl;
	cout << "*************************************************************" << endl;

	int i, j;
	
	Teacher teac( "Sun" , 'm', 27, "js", "mxdx");

	Student stu( "Li" , 'w', 22, 22, "computer");

	GradStudent grad( "Zhang" , 'm', 25, 12, "computer", "hzp");

	cout << endl;

loop:cout << "��������Ҫ��ѯ�Ķ���" << endl << "1.��ʦ��2.ѧ����3.�о�����" << endl;
{
	cin >> i; if (i == 1) teac.print();
	else if (i == 2) stu.print();
	else grad.print();
}

cout << endl ;

cout << "�Ƿ������ѯ��1.yes 2.no" << endl;  cin >> j;

if (j == 1) goto loop;
else return 0;
}