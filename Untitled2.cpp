#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale (LC_CTYPE, "ukr");
	float a, L;
	cout<<"������ �����:";
	cin>>a;
	L=a/1000;
	printf("��������� ����� � ��������(L):%.2f",L);
	return 0;
}
