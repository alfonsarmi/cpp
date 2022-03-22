#include<iostream>
using namespace std;

typedef struct telephone
{
	char *name;
	int number;
}TELEPHONE;

int main()
{
	TELEPHONE index;
	TELEPHONE *ptr_myindex;

	ptr_myindex = &index;

	ptr_myindex->name = "Jane Monroe";
	ptr_myindex->number = 12345;

	cout << "Name: " << ptr_myindex->name << '\n';
	cout << "Telephone number: " << ptr_myindex->number;

	return 0;
}