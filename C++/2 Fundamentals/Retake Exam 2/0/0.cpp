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

class Toolbox
{
public:
	//Parse string to digit from a single line.
	auto VecStrToU_Short()
	{
		unsigned short value;
		std::vector <unsigned short> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToU_Int()
	{
		unsigned int value;
		std::vector <unsigned int> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToU_L_Int()
	{
		unsigned long int value;
		std::vector <unsigned long int> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToU_L_L_Int()
	{
		unsigned long long int value;
		std::vector <unsigned long long int> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToShort()
	{
		short value;
		std::vector <short> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToInt()
	{
		int value;
		std::vector <int> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToL_Int()
	{
		long int value;
		std::vector <long int> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToL_L_Int()
	{
		long long int value;
		std::vector <long long int> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToFloat()
	{
		float value;
		std::vector <float> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;

	}
	auto VecStrToDouble()
	{
		double value;
		std::vector <double> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToL_Double()
	{
		
		long double value;
		std::vector <long double> vector;

		std::string input; std::getline(std::cin >> std::ws, input);
		std::istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	//Fill vector with elements and value from separate line.
	auto VecFillU_Short()
	{
		size_t elements, i; 
		std::cin >> elements;

		unsigned short value;

		std::vector<unsigned short> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillU_Int()
	{
		size_t elements, i; 
		std::cin >> elements;

		unsigned int value;

		std::vector<unsigned int> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillU_L_Int()
	{
		size_t elements, i; 
		std::cin >> elements;

		unsigned long int value;

		std::vector<unsigned long int> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillU_L_LInt()
	{
		size_t elements, value, i; 
		std::cin >> elements;

		std::vector<unsigned long long int> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillShort()
	{
		size_t elements, i; 
		std::cin >> elements;

		short value;
		std::vector<short> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillInt()
	{
		size_t elements, i; 
		std::cin >> elements;

		int value;
		std::vector<int> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillL_Int()
	{
		size_t elements, i; 
		std::cin >> elements;

		long int value;
		std::vector<long int> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillL_L_Int()
	{
		size_t elements, i; 
		std::cin >> elements;

		long long int value;
		std::vector<long long int> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillFloat()
	{
		size_t elements, i; 
		std::cin >> elements;

		float value;
		std::vector<float> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillDouble()
	{
		size_t elements, i; 
		std::cin >> elements;

		double value;
		std::vector<double> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillL_Double()
	{
		size_t elements, i; 
		std::cin >> elements;

		long double value;
		std::vector<long double> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillStr()
	{
		size_t elements, i; 
		std::cin >> elements;
		std::string input;
		std::vector<std::string> vector;
		vector.reserve(elements);

		for (i = 0; i < elements; i++)
		{
			std::getline(std::cin >> std::ws, input);
			vector.push_back(input);
		}

		return vector;
	}

	//Others
	void ClearConsole()
	{
#if defined(_WIN32)
		system("CLS");
#elif defined(__linux__) || defined(__unix__) || defined(__APPLE__)
		system("clear");
#endif
	}
};

int main()
{
	Toolbox parse;

	return 0;
}