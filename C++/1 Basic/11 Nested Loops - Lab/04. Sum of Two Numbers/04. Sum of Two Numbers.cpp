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

int main()
{
	short start; cin >> start;
	short end; cin >> end;
	short magicNumber; cin >> magicNumber;

	int combinationsCount = 0;
	bool combinationFound = false;

	for (short num1 = start; num1 <= end; num1++) 
	{
		for (short num2 = start; num2 <= end; num2++) 
		{
			combinationsCount++;

			if (num1 + num2 == magicNumber) 
			{
				cout << "Combination N:" << combinationsCount << " (" << num1 << " + " << num2 << " = " << magicNumber << ")" << endl;
				combinationFound = true;
				break;
			}
		}

		if (combinationFound)
		{
			break;
		}
	}

	if (!combinationFound) 
	{
		cout << combinationsCount << " combinations - neither equals " << magicNumber << endl;
	}

	return 0;
}