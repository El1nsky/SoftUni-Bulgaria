#define _USE_MATH_DEFINES
#include <algorithm>
#include <array>
#include <cctype>
#include <chrono>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
	string input, digits, letters, other;
	getline(cin, input);

	for (char c : input)
	{
		if (isdigit(c))
		{
			digits += c;
		}
		else if (isalpha(c))
		{
			letters += c;
		}
		else
		{
			other += c;
		}
	}

	cout << digits << '\n';
	cout << letters << '\n';
	cout << other;

	return 0;
}