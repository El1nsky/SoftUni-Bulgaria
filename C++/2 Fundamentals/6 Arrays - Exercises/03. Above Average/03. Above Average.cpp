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

int main()
{
	unsigned short aLenght; cin >> aLenght;
	short input[aLenght];
	short aboveAvrgOrEql[aLenght];
	short avrg = 0;
	short avrgDigitsCounter = 0;
	short sizeofAboveAvrgOrEql = 0;

	for (short i = 0; i < aLenght; i++)
	{
		cin >> input[i];
		avrg += input[i];
	}

	avrg /= aLenght;

	for (short i = 0; i < aLenght; i++)
	{
		if (avrg <= input[i])
		{
			aboveAvrgOrEql[sizeofAboveAvrgOrEql] = input[i];
			sizeofAboveAvrgOrEql++;
			avrgDigitsCounter++;
		}
	}

	for (short i = 0; i < avrgDigitsCounter; i++)
	{
		cout << aboveAvrgOrEql[i] << ' ';
	}

	return 0;
}