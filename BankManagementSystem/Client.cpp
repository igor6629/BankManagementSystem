#include "Client.h"
#include <string>
#include <iostream>

using namespace std;

namespace ClientSpace
{
	Client::Client(string name, string lastname)
	{
		this->name = name;
		this->lastname = lastname;
		balance = 0;
	}

	string Client::GetName()
	{
		return name;
	}

	void Client::ShowInfo()
	{
		cout << name << " " << lastname << " " << balance << endl;
	}

	void Client::Deposit(uint32_t count)
	{
		balance += count;
		cout << "Current balance is " << balance << endl;
	}

	void Client::Withdraw(uint32_t count)
	{
		if (count > balance)
		{
			cout << "Error! There are not enough funds on the balance." << endl;
		} 
		else
		{
			balance -= count;
			cout << "Current balance is " << balance << endl;
		}
	}
}