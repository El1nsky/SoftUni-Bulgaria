#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <map>

using namespace std;

int main()
{
	string flowers; cin >> flowers;

	short flowersN; cin >> flowersN;
	float budged; cin >> budged;
	float flowersP = 0.00;
	float discount = 0.00;
	float totalCost = 0.00;

	if (flowers == "Roses")
	{
		flowers = "Roses";
		flowersP = 5.00;

		if (flowersN > 80)
		{
			discount = 0.90;
			totalCost = flowersP * flowersN * discount;
		}
		else
		{
			totalCost = flowersP * flowersN;
		}
	}
	else if (flowers == "Dahlias")
	{
		flowersP = 3.80;

		if (flowersN > 90)
		{
			discount = 0.85;
			totalCost = flowersP * flowersN * discount;
		}
		else
		{
			totalCost = flowersP * flowersN;
		}
	}
	else if (flowers == "Tulips")
	{
		flowersP = 2.80;

		if (flowersN > 80)
		{
			discount = 0.85;
			totalCost = flowersP * flowersN * discount;
		}
		else
		{
			totalCost = flowersP * flowersN;
		}
	}
	else if (flowers == "Narcissus")
	{
		flowersP = 3.00;
		if (flowersN < 120)
		{
			discount = 0.15;
			totalCost = flowersP * flowersN + flowersP * flowersN * discount;
		}
		else
		{
			totalCost = flowersP * flowersN;
		}
	}
	else if (flowers == "Gladiolus")
	{
		flowersP = 2.50;


		if (flowersN < 80)
		{
			discount = 0.20;
			totalCost = flowersP * flowersN + flowersP * flowersN * discount;
		}
		else
		{
			totalCost = flowersP * flowersN;
		}
	}

	if (budged >= totalCost)
	{
		cout << "Hey, you have a great garden with " << flowersN << " " << flowers << " and " << fixed << setprecision(2) << budged - totalCost << " leva left.";
	}
	else 
	{
		cout << "Not enough money, you need " << fixed << setprecision(2) << abs(budged - totalCost) << " leva more.";
	}


	return 0;
}