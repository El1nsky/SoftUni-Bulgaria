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

int main()
{
	short n; cin >> n;

	float washingMachineP; cin >> washingMachineP;

	float toyP; cin >> toyP;

	short toysN = 0;
	short money = 0;
	short moneyForBday = 10;

		for (short age = 1; age <= n; age++)
		{

			if (age % 2 == 0)
			{
				money += moneyForBday -1;
				moneyForBday += 10;
			}
			else { toysN++; }

		}
		
		money += toyP * toysN;

		cout << fixed << setprecision(2);

		if ( money >= washingMachineP)
		{
			cout << "Yes! " << money - washingMachineP;
		}
		else 
		{
			cout << "No! " << washingMachineP - money;
		}

	return 0;
}