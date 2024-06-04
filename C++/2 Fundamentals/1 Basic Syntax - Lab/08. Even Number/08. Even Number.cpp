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

int main()
{
	int number; cin >> number;


	while (number % 2 == 1 || number % 2 < 0)
	{
		cout << "Please write an even number." << '\n';
		cin >> number;
	}

	cout << "The number is: " << abs(number);

	return 0;
}