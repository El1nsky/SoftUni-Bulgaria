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

int main()
 {
	unsigned short
		elements,
		input,
		i,
		oddSum,
		evenSum,
		avrg;

	cin >> elements;

	vector<short> numbers; numbers.reserve(elements);

	oddSum = 0;
	evenSum = 0;
	avrg = 0;

	for (i = 0; i < elements; i++)
	 {
		cin >> input;
		numbers.push_back(input);
		avrg += numbers[i];
	}

	avrg /= elements;

	for (vector<short>::iterator it = numbers.begin(); it != numbers.end();)
	 {
		if (*it > avrg)
			it = numbers.erase(it);
		else
			it++;
	}

	for (i = 0; i < numbers.size(); i++)
	 {
		if (i % 2 == 0)
			evenSum += numbers[i];
		else
			oddSum += numbers[i];
	}

	cout << evenSum * oddSum;

	return 0;
}