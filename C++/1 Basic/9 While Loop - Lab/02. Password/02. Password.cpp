#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <map>
#include <numeric>

using namespace std;

class Account
{
public:

	string username;
	string password;
	string inputPassword;
};

int main()
{
	Account User;

	cin >> User.username;
	cin >> User.password;

	while (User.password != User.inputPassword)
	{
		cin >> User.inputPassword;
	}

	cout << "Welcome " << User.username << '!';

	return 0;
}