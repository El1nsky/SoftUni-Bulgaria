#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	string text; getline(cin >> ws, text);

	for (char ch : text) 
	{
		cout << ch << '\n';
	}
	return 0;
}