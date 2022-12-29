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
		this->balance = 0;
		this->deposit = 0;
	}

	string Client::GetName()
	{
		return name;
	}

	void Client::ShowInfo()
	{
		cout << name << " " << lastname << " " << balance << " " << deposit << endl;
	}
}