#include <iostream>
#include "Client.h"

using namespace std;
using namespace Account;

void header()
{
	cout << "-----------------------------------------------------------------" << endl;
	cout << "|\t\t\tBANK OF AMERICA \t\t\t|" << endl;
	cout << "-----------------------------------------------------------------" << endl << endl;
}

void menu()
{
	cout << "\tMENU" << endl;
	cout << "___________________" << endl;
	cout << "1) Create Account\n" << "2) Sign In\n" << "3) Exit" << endl << endl;
}

int main()
{
	header();
	menu();
	
	int operation = 0;

	do
	{
		cout << "Select an operation: ";
		cin >> operation;
	} while (operation > 3 || operation <= 0);

	switch (operation)
	{
	case 1:
		header();
		cout << "Hi" << endl;
		break;
	case 2:
		header();
		cout << "Sign in" << endl;
	case 3:
		return 0;
	default:
		break;
	}
	
	return 0;
}
