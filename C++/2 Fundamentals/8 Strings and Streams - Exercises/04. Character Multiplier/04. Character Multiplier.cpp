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
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int calculateCharacterCodeSum(const string& str1, const string& str2)
{
	int sum = 0;

	// Iterate through the characters of both strings simultaneously
	unsigned short i = 0;

	while (i < str1.length() && i < str2.length())
	{
		// Multiply the character codes and add to the sum
		sum += str1[i] * str2[i];
		++i;
	}

	// Add the remaining character codes without multiplication
	while (i < str1.length())
	{
		sum += str1[i];
		++i;
	}

	while (i < str2.length())
	{
		sum += str2[i];
		++i;
	}

	return sum;
}

int main()
{
	// Read two strings from the console, separated by a single space
	string str1, str2;
	cin >> str1 >> str2;

	// Calculate the sum of character codes and print the result
	int sum = calculateCharacterCodeSum(str1, str2);
	cout << sum;

	return 0;
}