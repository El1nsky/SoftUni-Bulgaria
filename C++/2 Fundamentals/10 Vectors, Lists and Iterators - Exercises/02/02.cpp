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

#define _USE_MATH_DEFINES

using namespace std;

bool isValid(vector<char>& input)
{
	unsigned int br0count, br1count, br2count;
	br0count = 0; br1count = 0; br2count = 0;

	for (vector<char>::iterator it = input.begin(); it != input.end(); it++)
	{
		switch (*it)
		{
		case '{':
			if (br1count || br0count) return false;
			br2count++;
			break;
		case '}':
			if (br1count || br0count) return false;
			if (br2count == 0) return false;
			br2count--; break;
		case '[':
			if (br0count) return false;
			br1count++; break;
		case ']':
			if (br0count) return false;
			if (br1count == 0) return false;
			br1count--; break;
		case '(':
			br0count++;
			break;
		case ')':
			if (br0count == 0) return false;
			br0count--; break;
		}
	}

	return br2count == 0 && br1count == 0 && br0count == 0;
}

int main()
{
	string buffer; cin >> buffer;

	vector<char> input;
	input.reserve(buffer.size());

	for (char c : buffer)
		input.push_back(c);

	cout << (isValid(input) ? "valid" : "invalid");

	return 0;
}