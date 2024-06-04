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

using
std::cout,
std::cin,
std::cerr,
std::string,
std::ofstream,
std::ifstream,
std::stringstream,
std::istringstream,
std::ostringstream,
std::vector,
std::list,
std::map,
std::unordered_map,
std::set,
std::unordered_set,
std::deque,
std::getline,
std::endl,
std::flush,
std::ws,
std::fixed,
std::setprecision,
std::system,
std::stoi,
std::stod;

class Toolbox
{
public:
	//Parse string to digit from a single line.
	auto VecStrToU_Short()
	{
		unsigned short value;
		vector <unsigned short> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToU_Int()
	{
		unsigned int value;
		vector <unsigned int> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToU_L_Int()
	{
		unsigned long int value;
		vector <unsigned long int> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToU_L_L_Int()
	{
		unsigned long long int value;
		vector <unsigned long long int> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToShort()
	{
		short value;
		vector <short> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToInt()
	{
		int value;
		vector <int> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToL_Int()
	{
		long int value;
		vector <long int> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToL_L_Int()
	{
		long long int value;
		vector <long long int> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToFloat()
	{
		float value;
		vector <float> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;

	}
	auto VecStrToDouble()
	{
		double value;
		vector <double> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	auto VecStrToL_Double()
	{
		long double value;
		vector <long double> vector;

		string input; getline(cin >> ws, input);
		istringstream parse(input);

		while (parse >> value)
			vector.push_back(value);

		return vector;
	}
	//Fill vector with elements and value from separate line.
	auto VecFillU_Short()
	{
		size_t elements, i; cin >> elements;

		unsigned short value;

		vector<unsigned short> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillU_Int()
	{
		size_t elements, i; cin >> elements;

		unsigned int value;

		vector<unsigned int> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillU_L_Int()
	{
		size_t elements, i; cin >> elements;

		unsigned long int value;

		vector<unsigned long int> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillU_L_LInt()
	{
		size_t elements, value, i; cin >> elements;

		vector<unsigned long long int> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillShort()
	{
		size_t elements, i; cin >> elements;

		short value;
		vector<short> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillInt()
	{
		size_t elements, i; cin >> elements;

		int value;
		vector<int> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillL_Int()
	{
		size_t elements, i; cin >> elements;

		long int value;
		vector<long int> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillL_L_Int()
	{
		size_t elements, i; cin >> elements;

		long long int value;
		vector<long long int> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillFloat()
	{
		size_t elements, i; cin >> elements;

		float value;
		vector<float> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillDouble()
	{
		size_t elements, i; cin >> elements;

		double value;
		vector<double> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillL_Double()
	{
		size_t elements, i; cin >> elements;

		long double value;
		vector<long double> vector(elements);

		for (i = 0; i < elements; i++)
		{
			cin >> value;
			vector.push_back(value);
		}

		return vector;
	}
	auto VecFillStr()
	{
		size_t elements, i; cin >> elements;

		string input;

		vector<string> vector(elements);

		for (i = 0; i < elements; i++)
		{
			getline(cin >> ws, input);
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