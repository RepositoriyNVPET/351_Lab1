#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	float a, b, c;
	setlocale (LC_CTYPE, "ukr");
	cout<<"Введіть а:";
	cin>>a;
	cout<<"Введіть b:";
	cin>>b;
	a=sqrt(pow(a,2)+pow(b,2));
	printf("Довжина гіпотенузи: %.2f",a);
}
