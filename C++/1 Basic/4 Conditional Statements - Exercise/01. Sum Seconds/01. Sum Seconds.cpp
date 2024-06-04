#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::ws;
using std::fixed;
using std::setprecision;
using std::string;

int main()
{
	short firstTime; cin >> firstTime;
	short secondTime; cin >> secondTime;
	short thirdTime; cin >> thirdTime;
	short totalTime = firstTime + secondTime + thirdTime;

	short minutes = totalTime / 60;
	short seconds = totalTime % 60;

	if (seconds < 10)
	{
		cout << minutes << ":0" << seconds;
	}
	else
	{
		cout << minutes << ":" << seconds;
	}

	return 0;
}