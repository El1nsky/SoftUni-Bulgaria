#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <map>

using namespace std;

int main()
{
	string text; getline(cin >> ws, text);

	int vowelSum = 0;

	for (int i = 0; i < text.length(); i++)
	{
		char ch = tolower(text[i]);

		if (ch == 'a') 
{
			vowelSum += 1;
		}
		else if (ch == 'e') 
		{
			vowelSum += 2;
		}
		else if (ch == 'i') 
		{
			vowelSum += 3;
		}
		else if (ch == 'o') 
		{
			vowelSum += 4;
		}
		else if (ch == 'u') 
		{
			vowelSum += 5;
		}
	}

	cout << vowelSum << '\n';

	return 0;
}