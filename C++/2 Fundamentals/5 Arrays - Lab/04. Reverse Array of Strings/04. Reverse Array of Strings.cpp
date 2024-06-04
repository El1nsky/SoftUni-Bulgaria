#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cmath>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <list>
#include <map>
#include <climits> 
#include <stdlib.h>
#include <cctype>

using namespace std;

int main()
{
	string text[100] = {};

	short input; cin >> input;

	for (short i = 0; i < input; i++)
	{
		cin >> text[i];
	}

	for (short i = input - 1; i >= 0; i--)
	{
		cout << text[i] << ' ';
	}

	return 0;
}