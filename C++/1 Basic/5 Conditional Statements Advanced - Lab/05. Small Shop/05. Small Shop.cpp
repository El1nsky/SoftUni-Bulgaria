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
	string product; getline(cin, product);
	string city; getline(cin, city);

	long double quantity; cin >> quantity;
	long double coffee[] = { 0.50,0.40,0.45 };
	long double water[] = { 0.80,0.70,0.70 };
	long double beer[] = { 1.20,1.15,1.10 };
	long double sweets[] = { 1.45,1.30,1.35 };
	long double peanuts[] = { 1.60,1.50,1.55 };

	if (city == "Sofia")
	{
		if (product == "coffee")
		{
			cout << quantity * coffee[0];
		}
		else if (product == "water")
		{
			cout << quantity * water[0];
		}
		else if (product == "beer")
		{
			cout << quantity * beer[0];
		}
		else if (product == "sweets")
		{
			cout << quantity * sweets[0];
		}
		else if (product == "peanuts")
		{
			cout << quantity * peanuts[0];
		}
	}
	else if (city == "Plovdiv")
	{
		if (product == "coffee")
		{
			cout << quantity * coffee[1];
		}
		else if (product == "water")
		{
			cout << quantity * water[1];
		}
		else if (product == "beer")
		{
			cout << quantity * beer[1];
		}
		else if (product == "sweets")
		{
			cout << quantity * sweets[1];
		}
		else if (product == "peanuts")
		{
			cout << quantity * peanuts[1];
		}
	}
	else if (city == "Varna")
	{
		if (product == "coffee")
		{
			cout << quantity * coffee[2];
		}
		else if (product == "water")
		{
			cout << quantity * water[2];
		}
		else if (product == "beer")
		{
			cout << quantity * beer[2];
		}
		else if (product == "sweets")
		{
			cout << quantity * sweets[2];
		}
		else if (product == "peanuts")
		{
			cout << quantity * peanuts[2];
		}
	}

	return 0;
}