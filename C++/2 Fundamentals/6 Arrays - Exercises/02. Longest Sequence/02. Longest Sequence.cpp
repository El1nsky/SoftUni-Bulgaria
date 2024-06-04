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

using namespace std;

void longestSequence(short array[], short length);

int main() {

	short length; cin >> length;

	if (length == 0) { cout << 0; return 0; }

	short array[length];

	for (short i = 0; i < length; i++) { cin >> array[i]; }
	longestSequence(array, length);


	return 0;
}

void longestSequence(short array[], short length)
{

	short number1 = 0;
	short number2 = 0;
	short counter = 1;
	short minCounter = INT_MIN;
	short number = 0;

	if (length == 1)
	{
		number = array[0];
		number2 = array[0];
	}

	for (short i = 1; i < length; i++)
	{
		number1 = array[i - 1];
		number2 = array[i];

		if (number1 == number2)
		{
			counter++;
		}
		else
		{
			counter = 1;
		}

		if (minCounter <= counter)
		{
			number = number1;
			minCounter = counter;
		}

		if (length == 1)
		{
			number = array[0];
			number2 = array[0];
		}
	}

	if (minCounter <= 1)
	{
		cout << number2 << '\n';
	}
	else if (minCounter > 1) 
	{
		for (short i = 0; i < minCounter; i++) 
		{
			cout << number << " ";
		}
	}
}