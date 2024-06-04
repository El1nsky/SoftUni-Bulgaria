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

int main()
{
	std::string input;
	std::getline(std::cin >> std::ws, input);
	std::istringstream iss(input);

	std::vector<int> numbers;
	int temp;


	while (iss >> temp)
	{
		numbers.push_back(temp);
	}

	for (auto i : numbers)
		std::cout << i << ' ';

	return 0;
}