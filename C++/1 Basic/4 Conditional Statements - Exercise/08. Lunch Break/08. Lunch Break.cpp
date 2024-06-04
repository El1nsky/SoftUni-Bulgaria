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
	string title; getline(cin, title);

	short titleLength; cin >> titleLength;
	short breakLength; cin >> breakLength;

	float timeForLunch = breakLength / 8.0F;
	float timeForBreak = breakLength / 4.0F;

	float timeLeft = breakLength - timeForLunch - timeForBreak;

	if (timeLeft >= titleLength) 
	{
		cout << "You have enough time to watch " << title << " and left with " << ceil(timeLeft - titleLength) << " minutes free time.";
	}
	else 
	{
		cout << "You don't have enough time to watch " << title << ", you need " << ceil(titleLength - timeLeft) << " more minutes.";
	}

	return 0;
}


