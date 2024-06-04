#define _USE_MATH_DEFINES
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
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>
int main()
{
	std::string input;

	while (std::getline(std::cin >> std::ws, input))
	{	
		if (input == "end") return 0;

		std::cout << input << " = ";
		std::reverse(input.begin(), input.end());
		std::cout << input << '\n';
	}	

	return 0;
}