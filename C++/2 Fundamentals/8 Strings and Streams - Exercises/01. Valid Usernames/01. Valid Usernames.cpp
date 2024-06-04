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

bool isValidChar(char c)
{
	return isalnum(c) || c == '-' || c == '_';
}
bool isValidString(const string& name)
{
	if (name.length() < 3 || name.length() > 16) return false;

	for (char c : name)
	{
		if (!isValidChar(c)) return false;
	}

	return true;
}

int main()
{
	string buffer; 
	getline(cin, buffer);

	const string divider = ", ";
	
	istringstream istr(buffer);

	while (buffer.length())
	{
		string username;

		short divPos = buffer.find(divider);

		if (divPos != string::npos)
		{
			username = buffer.substr(0, divPos);
			buffer.erase(0, divPos + divider.length());
		}
		else
		{
			username = buffer;
			buffer.clear();
		}

		if (isValidString(username)) cout << username << '\n';
	}

	return 0;
}