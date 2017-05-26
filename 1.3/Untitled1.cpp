#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, y, A;
	setlocale (LC_CTYPE, "ukr");
	cout<<"Ââåä³òü õ:";
	cin>>x;
	cout<<"Ââåä³òü y:";
	cin>>y;
	A=(x+sin(y+5.2)*log(abs(x*y)))/(sqrt(x*x+pow(y,4))-cos((x*y)/(sqrt(x*x+y*y))));
	cout<<"Çíà÷åííÿ ôóíêö³¿:"<<A;	
}
