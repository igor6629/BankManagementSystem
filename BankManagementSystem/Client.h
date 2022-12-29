#pragma once

#include <string>
#include <time.h>

namespace Account 
{
	class Client
	{
	private:
		std::string name;
		std::string lastname;
		
		std::string login;
		uint32_t password;
		
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
		void CloseDeposit();
	};
}