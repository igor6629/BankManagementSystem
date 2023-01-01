#include "Validation.h"
#include <iostream>
#include <string>
#include <set>

using namespace std;

namespace validation
{
	bool CheckLogin(string login)
	{
		if (login.size() < 5 || login.size() > 14)
			return false;

		set<char> symb = { '-', '/', '=', '!', '_' };

		// todo:Check in database login

		for (int i = 0; i < login.size(); ++i)
			if ((login[i] < 48 && login[i] > 57) && (login[i] < 97 && login[i] > 122) && (login[i] < 65 && login[i] > 90) && symb.find(login[i]) == symb.end())
				return false;

		return true;
	}
}