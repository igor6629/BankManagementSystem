#include <iostream>
#include "Client.h"

using namespace std;
using namespace ClientSpace;

int main()
{
	Client client = Client("John", "Collins");
	client.ShowInfo();

	client.Deposit(500);
	client.Withdraw(400);
	client.Withdraw(500);
	
	return 0;
}
