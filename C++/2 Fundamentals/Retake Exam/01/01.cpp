#include <algorithm>
#include <array>
#include <cctype>
#include <chrono>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <deque>
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
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main()
{
	int elements, value, maxOdd, minEven;

	cin >> elements;

	vector<int> numbers;
	numbers.reserve(elements);

	string input;
	getline(cin >> ws, input);

	istringstream parse(input);

	while (parse >> value)
 		numbers.push_back(value);

	maxOdd = INT_MIN;
	minEven = INT_MAX;

	double sum = 0;

	for (size_t i = 0; i < numbers.size(); i++)
	{
		sum += numbers[i];

		if (numbers[i] % 2 == 1)
			maxOdd = numbers[i];
		else
			minEven = numbers[i];
	}

	sum /= numbers.size();
	reverse(numbers.begin(), numbers.end());

	cout << fixed << setprecision(2);
	cout << (double)maxOdd << ' ' << (double)minEven << ' ' << sum << '\n';

	for (size_t i = 0; i < numbers.size(); i++)
		cout << numbers[i] << ' ';

	return 0;
}