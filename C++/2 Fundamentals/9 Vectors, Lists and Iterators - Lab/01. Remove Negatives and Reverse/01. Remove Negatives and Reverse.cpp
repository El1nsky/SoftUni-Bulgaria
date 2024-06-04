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

//template <typename X, typename Y, typename Z>

auto readInts(istream& input, vector<short>& elements)
{
	short i;

	while (input >> i)
	{
		elements.push_back(i);
	}
}

int main()
{
	string input; getline(cin >> ws, input);

	vector<short> numbers;
	vector<short>::iterator iV;

	istringstream swap(input);

	readInts(swap, numbers);

	for (iV = numbers.begin(); iV != numbers.end();)
	{
		if (*iV < 0) iV = numbers.erase(iV);
		else iV++;
	}

	if (numbers.size())
	{
		for (iV = numbers.end() - 1;; iV--)
		{
			cout << *iV << ' ';
			if (iV == numbers.begin()) break;
		}
	}
	else cout << "empty";

	return 0;
}