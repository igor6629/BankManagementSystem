#pragma once

#include <string>
#include <time.h>

namespace ClientSpace 
{
	class Client
	{
	private:
		std::string name;
		std::string lastname;
		
		float balance;
		float deposit;
		float percentage = 10;
		
		time_t lastTimeOfDeposit = NULL;
		time_t currentWeekOfDeposit = NULL;
		
		bool closeDeposit = false;
	public:
		Client(std::string name, std:: string lastname);
		void ShowInfo();
		void Replenishment(float count);
		void Withdraw(float count);
		void OpenDeposit(float count);
		void ChangeDeposit(float count);
		void CheckDeposit();
	};
}