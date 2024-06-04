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
#include <climits> 

using namespace std;

bool IsPrime(int number)
{
	if (number < 2)
	{
		return false;
	}

	for (int divisor = 2; divisor <= sqrt(number); divisor++)
	{
		if (number % divisor == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int primeSum = 0;
	int nonPrimeSum = 0;

	while (true)
	{
		string input;
		cin >> input;

		if (input == "stop")
		{
			break;
		}

		int number = stoi(input);

		if (number < 0)
		{
			cout << "Number is negative." << '\n';
			continue;
		}

		if (IsPrime(number))
		{
			primeSum += number;
		}
		else
		{
			nonPrimeSum += number;
		}
	}

	cout << "Sum of all prime numbers is: " << primeSum << '\n';
	cout << "Sum of all non prime numbers is: " << nonPrimeSum << '\n';

	return 0;
}