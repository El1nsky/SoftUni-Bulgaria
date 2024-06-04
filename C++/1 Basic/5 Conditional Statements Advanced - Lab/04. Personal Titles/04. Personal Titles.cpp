#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	float age; cin >> age;
	string sex; cin >> sex;

	if (age >= 16 & sex == "m")
	{
		cout << "Mr.";
	}
	else if (age < 16 & sex == "m")
	{
		cout << "Master";
	}
	else if (age >= 16 & sex == "f")
	{
		cout << "Ms.";
	}
	else if (age < 16 & sex == "f")
	{
		cout << "Miss";
	}

	return 0;
}