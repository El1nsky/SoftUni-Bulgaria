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

	float* numbers = new float[n];
	float sum = 0;
	float maxNumber = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
		sum += numbers[i];
		maxNumber = max(maxNumber, numbers[i]);
	}

	float otherNumbers = sum - maxNumber;

	cout << fixed << setprecision(0);

	if (otherNumbers == maxNumber)
	{
		cout << "Yes" << '\n'
			 << "Sum = " << otherNumbers;
	}
	else
	{
		cout << "No" << '\n'
			 << "Diff = " << abs(maxNumber - otherNumbers);
	}

	delete[] numbers;

	return 0;
}