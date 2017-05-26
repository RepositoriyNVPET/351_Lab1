#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale (LC_CTYPE, "ukr");
	float a, L;
	cout<<"¬вед≥ть метри:";
	cin>>a;
	L=a/1000;
	printf("ѕереведен≥ метри в к≥лометри(L):%.2f",L);
	return 0;
}
