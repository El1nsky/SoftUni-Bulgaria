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

string replaceString(const string& input, const string& findStr, const string& replaceStr)
{
	string result = input;

	unsigned long int pos = result.find(findStr);

	while (pos != string::npos)
	{
		result.replace(pos, findStr.length(), replaceStr);
		pos = result.find(findStr, pos + replaceStr.length());
	}

	return result;
}

int main() 
{
	string inputText;
	getline(cin, inputText);

	// Read a "find" string from the second line of the console
	string findString;
	getline(cin, findString);

	// Read a "replace" string from the third line of the console
	string replaceString2;
	getline(cin, replaceString2);

	// Replace occurrences of the "find" string with the "replace" string and print the result
	string result = replaceString(inputText, findString, replaceString2);
	cout << result;

	return 0;
}