#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	float a, b, c;
	setlocale (LC_CTYPE, "ukr");
	cout<<"������ �:";
	cin>>a;
	cout<<"������ b:";
	cin>>b;
	a=sqrt(pow(a,2)+pow(b,2));
	printf("������� ���������: %.2f",a);
}
