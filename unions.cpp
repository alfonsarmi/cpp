#include<iostream>
using namespace std;

typedef union myunion
{
	double PI;
	int B;
}MYUNION;

int main()
{
	MYUNION numbers;
	numbers.PI = 3.14;
	numbers.B = 50;

	return 0;
}