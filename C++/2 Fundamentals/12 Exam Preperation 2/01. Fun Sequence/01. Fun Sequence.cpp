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

using namespace std;

int main()
{
	short elements, i; cin >> elements;
	if (elements <= 0)
	{
		cout << "No";
		return 1;
	}

	long int average, input;

	vector<long int> vec, vec2;
	vec.reserve(elements);

	average = 0;

	for (i = 0; i < elements; i++)
	{
		cin >> input;
		vec.push_back(input);
		average += input;
	}

	average /= elements;

	for (i = 0; i < elements; i++)
	{
		if (vec[i] % 2 == 0 && vec[i] < average)
		{
			vec2.push_back(vec[i]);
		}
	}

	sort(vec2.begin(), vec2.end());
	reverse(vec2.begin(), vec2.end());


	if (vec2.empty())
	{
		cout << "No"; return 1;
	}
	else
	{
		for (i = 0; i < vec2.size(); i++)
		{
			cout << vec2[i] << ' ';
		}
	}

	return 0;
}