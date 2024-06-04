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
	string input, token; getline(cin, input);

	short sum = 0;

	istringstream istr(input);
	ostringstream errors;

	while (istr >> token)
	{
		istringstream istrConvert(token);

		short number;

		istrConvert >> number;

		if (istrConvert) sum += number;
		else errors << token << ' ';
	}

	cout << sum << '\n'
		<< errors.str();


	return 0;
}