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
#include <ostream>
#include <sstream>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string capitalizeWords(const string& input)
{
	string result;

	bool capitalizeNext = true;

	for (char ch : input)
	{
		if (isalpha(ch))
		{
			if (capitalizeNext)
			{
				result += toupper(ch);
				capitalizeNext = false;
			}
			else
			{
				result += tolower(ch);
			}
		}
		else
		{
			result += ch;
			capitalizeNext = true;
		}
	}

	return result;
}

int main()
{
	// Read a text from the first line of the console
	string inputText;
	getline(cin, inputText);

	// Capitalize the first letter of each word and print the result
	string result = capitalizeWords(inputText);
	cout << result;

	return 0;
}