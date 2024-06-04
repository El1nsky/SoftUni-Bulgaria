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
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
	int
		a,
		b,
		result,
		number,
		num;

	deque<int> sequence;

	string operation;

	while (true)
	{
		getline(cin, operation);

		if (operation == "end") break;

		else if (operation == "sum")
		{
			a = sequence.back();
			sequence.pop_back();
			b = sequence.back();
			sequence.pop_back();
			sequence.push_back(a + b);
		}
		else if (operation == "subtract")
		{
			a = sequence.back();
			sequence.pop_back();
			b = sequence.back();
			sequence.pop_back();
			sequence.push_back(a - b);
		}
		else if (operation == "concat")
		{
			a = sequence.back();
			sequence.pop_back();
			b = sequence.back();
			sequence.pop_back();
			stringstream ss;
			ss << b << a;
			result;
			ss >> result;
			sequence.push_back(result);
		}
		else if (operation == "discard")
		{
			if (!sequence.empty())
			{
				sequence.pop_back();
			}
		}
		else
		{
			number;
			stringstream(operation) >> number;
			sequence.push_back(number);
		}
	}

	for (auto num : sequence) cout << num << '\n';

	return 0;
}