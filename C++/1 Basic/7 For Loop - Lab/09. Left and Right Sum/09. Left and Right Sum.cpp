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

	vector<int> numbers(2 * n);

	for (int i = 0; i < 2 * n; i++)
	{
		cin >> numbers[i];
	}

	vector<int> leftNumbers(numbers.begin(), numbers.begin() + n);
	vector<int> rightNumbers(numbers.begin() + n, numbers.end());

	int leftSum = accumulate(leftNumbers.begin(), leftNumbers.end(), 0);
	int rightSum = accumulate(rightNumbers.begin(), rightNumbers.end(), 0);

	if (leftSum == rightSum)
	{
		cout << "Yes, sum = " << leftSum;
	}
	else
	{
		cout << "No, diff = " << abs(leftSum - rightSum);
	}

	return 0;
}