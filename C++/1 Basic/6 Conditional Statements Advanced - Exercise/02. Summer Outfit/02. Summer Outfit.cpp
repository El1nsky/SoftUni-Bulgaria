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
	short degrees; cin >> degrees;

	string timeOfDay; cin >> timeOfDay;
	string dress;
	string shoes;

	if (degrees >= 10 && degrees <= 18)
	{
		if (timeOfDay == "Morning")
		{
			dress = "Sweatshirt";
			shoes = "Sneakers";
		}	
		else if (timeOfDay == "Afternoon")
		{
			dress = "Shirt";
			shoes = "Moccasins";
		}
		else 
		{
			dress = "Shirt";
			shoes = "Moccasins";
		}
	}
	else if (degrees > 18 && degrees <= 24)
	{
		if (timeOfDay == "Morning")
		{
			dress = "Shirt";
			shoes = "Moccasins";
		}
		else if (timeOfDay == "Afternoon")
		{
			dress = "T-Shirt";
			shoes = "Sandals";
		}
		else
		{
			dress = "Shirt";
			shoes = "Moccasins";
		}
	}
	else if (degrees >= 25)
	{
		if (timeOfDay == "Morning")
		{
			dress = "T-Shirt";
			shoes = "Sandals";
		}
		else if (timeOfDay == "Afternoon")
		{
			dress = "Swim Suit";
			shoes = "Barefoot";
		}
		else
		{
			dress = "Shirt";
			shoes = "Moccasins";
		}
	}

	cout << "It's " << degrees << " degrees, get your " << dress << " and " << shoes << ".";

	return 0;
}