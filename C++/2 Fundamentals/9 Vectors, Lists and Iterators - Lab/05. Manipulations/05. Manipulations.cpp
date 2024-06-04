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
	string line, command;
	getline(cin >> ws, line);

	vector<short> numbers;
	stringstream ss(line);

	short number, newNumber, removeNumber, index, insertNumber, insertIndex;

	while (ss >> number) { numbers.push_back(number); }

	while (command != "end")
	{
		cin >> command;

		if (command == "Add")
		{
			cin >> newNumber;
			numbers.push_back(newNumber);
		}
		else if (command == "Remove")
		{
			cin >> removeNumber;

			auto it = find(numbers.begin(), numbers.end(), removeNumber);
			if (it != numbers.end()) { numbers.erase(it); }
		}
		else if (command == "RemoveAt")
		{
			cin >> index;

			if (index >= 0 && index < numbers.size()) { numbers.erase(numbers.begin() + index); }
		}
		else if (command == "Insert")
		{
			cin >> insertNumber >> insertIndex;

			if (insertIndex >= 0 && insertIndex <= numbers.size()) { numbers.insert(numbers.begin() + insertIndex, insertNumber); }
		}
	}

	for (auto number : numbers) { cout << number << ' '; }

	return 0;
}