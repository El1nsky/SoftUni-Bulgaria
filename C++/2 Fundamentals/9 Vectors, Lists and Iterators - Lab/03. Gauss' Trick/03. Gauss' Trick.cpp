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
	string input; getline(cin >> ws, input);
	istringstream iss(input);

	vector<short> numbers;

	short num, n;

	while (iss >> num) numbers.push_back(num);

	n = numbers.size();
	vector<short> result;

	for (unsigned short i = 0; i < n / 2; ++i) result.push_back(numbers[i] + numbers[n - 1 - i]);


	if (n % 2 == 1) result.push_back(numbers[n / 2]);


	for (unsigned short i : result) cout << i << ' ';

	return 0;
}