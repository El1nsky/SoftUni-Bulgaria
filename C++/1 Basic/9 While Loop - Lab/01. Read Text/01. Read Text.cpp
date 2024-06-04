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
	string textInput;

	while (textInput !="Stop")
	{
		cin >> textInput;
		if (textInput == "Stop") { break; }
		cout << textInput << '\n';
	}

	return 0;
}