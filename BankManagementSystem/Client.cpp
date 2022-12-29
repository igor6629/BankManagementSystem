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
		deposit = 0;
	}

	void Client::ShowInfo()
	{
		cout << name << " " << lastname << " " << balance << endl;
	}

	void Client::Replenishment(float count)
	{
		if (count < 0)
		{
			cout << "Error! Enter the correct amount" << endl;
		}
		else
		{
			balance += count;
		}
	}

	void Client::Withdraw(float count)
	{
		if (count < 0)
		{
			cout << "Error! Enter the correct amount" << endl;
			return;
		}

		if (count > balance)
			cout << "Error! There are not enough funds on the balance." << endl;
		else
			balance -= count;
	}

	void Client::OpenDeposit(float count)
	{
		if (count < 0)
		{
			cout << "Error! Enter the correct amount" << endl;
			return;
		}

		if (lastTimeOfDeposit == NULL)
		{
			lastTimeOfDeposit = time(0);
			currentWeekOfDeposit = lastTimeOfDeposit + (3600 * 24 * 7);
			deposit = count;
		}
		else
		{
			cout << "Error! The deposit is already open." << endl;
		}
	}

	void Client::ChangeDeposit(float count)
	{
		if (lastTimeOfDeposit == NULL)
		{
			cout << "Error! The deposit is not opet yet." << endl;
		}
		else
		{
			time_t currentDate = time(0);

			if (currentDate > currentWeekOfDeposit)
			{
				cout << "Error! The time for changing the deposit has expired." << endl;
			}
			else
			{
				if (deposit + count < 0)
				{
					cout << "Error! There are not enough funds on your deposit." << endl;
				}
				else
				{
					deposit += count;
				}
			}
		}
	}

	void Client::CheckDeposit()
	{
		time_t currentDate = time(0);

		if (lastTimeOfDeposit + (3600 * 24 * 365) >= currentDate)
		{
			float profit = deposit * (percentage / 100);
			balance += profit;

			if (closeDeposit)
			{
				CloseDeposit();
			}

			lastTimeOfDeposit = currentDate;
			currentWeekOfDeposit = lastTimeOfDeposit + (3600 * 24 * 7);
		}
	}

	void Client::CloseDeposit()
	{
		if (lastTimeOfDeposit == NULL)
		{
			cout << "Error! The deposit is not opet yet." << endl;
		}
		else
		{
			time_t currentDate = time(0);

			if (currentDate > currentWeekOfDeposit)
			{
				closeDeposit = true;
				cout << "The money will be returned to your account at the expiration of the contract." << endl;
			}
			else
			{
				balance += deposit;
				deposit = 0;
				
				lastTimeOfDeposit = NULL;
				currentWeekOfDeposit = NULL;
				closeDeposit = true;

				cout << "The deposit is closed.The money was returned to the account." << endl;
			}
		}
	}
}