#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	float a, b, c;
	setlocale (LC_CTYPE, "ukr");
	cout<<"Вывод а:";
	cin>>a;
	cout<<"Вывод b:";
	cin>>b;
	a=sqrt(pow(a,2)+pow(b,2));
	printf("Вывод на экран: %.2f",a);
}
