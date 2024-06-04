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

int main()
{
	unsigned short productsA;

	vector<string> productsN;
	string input;

	cin >> productsA;

	for (unsigned short i = 0; i < productsA; i++)
	{
		getline(cin >> ws, input);
		productsN.push_back(input);
	}

	sort(productsN.begin(), productsN.end());

	for (unsigned short i = 0; i < productsN.size(); i++)
	{
		cout << i + 1 << '.' << productsN[i] << '\n';
	}

	return 0;
}