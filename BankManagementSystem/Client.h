#pragma once

#include <string>

namespace ClientSpace 
{
	class Client
	{
	private:
		std::string name;
		std::string lastname;
		uint32_t balance;
		uint32_t deposit;
		uint32_t percentage = 10;
	public:
		Client(std::string name, std:: string lastname);
		std::string GetName();
		void ShowInfo();
	};
}