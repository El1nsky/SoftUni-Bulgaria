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

string compressString(const string& input)
{
	string compressedString;

	if (input.empty()) return compressedString;

	char currentChar = input[0];
	compressedString += currentChar;

	for (unsigned short i = 1; i < input.length(); ++i) 
	{
		if (input[i] != currentChar) 
		{
			currentChar = input[i];
			compressedString += currentChar;
		}
	}

	return compressedString;
}

int main() 
{
	// Read the string from the console
	string inputString;
	getline(cin, inputString);

	// Compress the string and print the result
	string result = compressString(inputString);
	cout << result;

	return 0;
}