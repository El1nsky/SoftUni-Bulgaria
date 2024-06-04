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
#include <numeric>

using namespace std;

int main()
{
	int n; cin >> n;

	int* numbers = new int[n];

	for (int i = 0; i < n; i++) 
	{
		cin >> numbers[i];
	}

	int evenSum = 0;
	int oddSum = 0;

	for (int i = 0; i < n; i++) 
	{
		if (i % 2 == 0) 
		{
			evenSum += numbers[i];
		}
		else 
		{
			oddSum += numbers[i];
		}
	}

	if (evenSum == oddSum) 
	{
		cout << "Yes" <<'\n'
			 << "Sum = " << evenSum;
	}
	else 
	{
		cout << "No" <<'\n'
			 << "Diff = " << abs(evenSum - oddSum);
	}

	delete[] numbers;

	return 0;
}