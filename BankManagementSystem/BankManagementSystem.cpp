#include "Client.h"
#include "Validation.h"
#include <iostream>

using namespace std;
using namespace Account;
using namespace validation;

void header()
{
	cout << "-----------------------------------------------------------------" << endl;
	cout << "|\t\t\tBANK OF AMERICA \t\t\t|" << endl;
	cout << "-----------------------------------------------------------------" << endl << endl;
}

int  menu()
{
	cout << "\tMENU" << endl;
	cout << "___________________" << endl;
	cout << "1) Create Account\n" << "2) Sign In\n" << "3) Exit" << endl << endl;

	int operation = 0;

	do
	{
		cout << "Select an operation: ";
		cin >> operation;
	} while (operation > 3 || operation <= 0);

	return operation;
}

bool createNewClient()
{
	Client* client = new Client();
	string login;
	string name;
	string lastname;

	cout << "Input Your login (contains only Aa-Zz, 0-9, \" - /= !_\", length: 5-14): ";
	cin >> login;

	while (!CheckLogin(login))
		cin >> login;

	return true;
}

void choose(int operation)
{
	switch (operation)
	{
	case 1:
		header();
		
		if (!createNewClient())
		{
			int newOperation = menu();
			choose(newOperation);
		}

		break;
	case 2:
		header();
		cout << "Sign in" << endl;
	case 3:
		return;
	default:
		break;
	}
}

int main()
{
	header();
	int operation = menu();
	choose(operation);
	
	return 0;
}
