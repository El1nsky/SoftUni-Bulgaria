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
	long currentValue, temp, previousValue;
	char operation;

	string inputLine, element; getline(cin, inputLine);
	istringstream buffer(inputLine);

	currentValue = 0;
	temp = 0;
	previousValue = 0;

	while (buffer >> element)
	{
		if (isdigit(element[0]))
		{
			temp = currentValue;
			previousValue = currentValue;
			currentValue = stol(element);
		}
		else
		{
			operation = element[0];

			switch (operation) 
			{
			case '+':
				previousValue = currentValue;
				currentValue = temp + currentValue;
				break;
			case '-':
				previousValue = currentValue;
				currentValue = temp - currentValue;
				break;
			case '*':
				previousValue = currentValue;
				currentValue = temp * currentValue;
				break;
			case '/':
				previousValue = currentValue;
				currentValue = temp / currentValue;
				break;
			}
		}
	}

	std::cout << currentValue << ' ' << previousValue;

	return 0;
}