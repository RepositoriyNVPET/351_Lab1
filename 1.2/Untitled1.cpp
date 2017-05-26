#include <stdio.h>
#include<conio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int kop, gruv;
	setlocale (LC_CTYPE, "ukr");
	cout<<"Гривні: ";
	cin>>gruv;
	cout<<"Копійки:";
	cin>>kop;
	cout<<gruv<<"грн."<<kop<<"коп.";
}
