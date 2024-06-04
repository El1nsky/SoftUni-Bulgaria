#define _USE_MATH_DEFINES

#include <iostream>
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

using namespace std;

void trianglePrint();

int main()
{
	trianglePrint();

	return 0;
}

void trianglePrint()
{
	short h;
	cin >> h;

	for (short i = 1; i <= h; i++)
	{
		for (short j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << '\n';
	}

	for (short i = h - 1; i >= 1; i--)
	{
		for (short j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << '\n';
	}
}