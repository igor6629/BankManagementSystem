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
		
		float balance = 0;
		float deposit = 0;
		float percentage = 10;
		
		time_t lastTimeOfDeposit = NULL;
		time_t currentWeekOfDeposit = NULL;
		
		bool closeDeposit = false;
	
	public:
		void ShowInfo();
		void Replenishment(float count);
		void Withdraw(float count);
		void OpenDeposit(float count);
		void ChangeDeposit(float count);
		void CheckDeposit();
		void CloseDeposit();
	};
}