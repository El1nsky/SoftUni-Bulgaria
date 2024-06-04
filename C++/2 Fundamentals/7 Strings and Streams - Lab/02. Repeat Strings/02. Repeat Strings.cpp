#define _USE_MATH_DEFINES
#include <algorithm>
#include <array>
#include <cctype>
#include <chrono>
#include <sstream>
#include <ostream>
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

using namespace std;

int main()
{
	std::string input, buffer;

	std::getline(std::cin >> std::ws, input);

	std::stringstream stream(input);

	while (stream >> buffer)
	{
		for (unsigned short i = 0; i < buffer.size(); i++)
		{
			std::cout << buffer;
		}
	}

	return 0;
}