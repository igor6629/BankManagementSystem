#include <iostream>
#include "Client.h"

using namespace std;
using namespace ClientSpace;

int main()
{
	Client client = Client("John", "Collins");
	client.ShowInfo();
	
	return 0;
}
