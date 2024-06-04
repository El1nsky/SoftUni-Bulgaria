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
#include <climits> 

using namespace std;

int main()
{
	float excursionP; cin >> excursionP;

	float balance; cin >> balance;

	string action;


	float  depositWithdraw;
	short counterSpend = 0;
	short counterDays = 0;

	while (balance < excursionP)
	{
		cin >> action;
		cin >> depositWithdraw;

		counterDays++;

		if (action == "save") { balance += depositWithdraw; counterSpend = 0; }
		else { balance -= depositWithdraw; counterSpend++; }

		if (balance < 0) { balance = 0; }

		if (counterSpend >= 5)
		{
			cout << "You can't save the money. \n" << counterDays;
			return 0;
		}

	}

	cout << "You saved the money for " << counterDays << " days.";

	return 0;
}