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
	int floors; cin >> floors;
	int rooms; cin >> rooms;

	for (int i = floors; i > 0; i--)
	{
		for (int j = 0; j < rooms; j++)
		{
			if (i == floors)
			{
				cout << "L" << i << j << " ";
			}
			else if (i % 2 == 0)
			{
				cout << "O" << i << j << " ";
			}
			else
			{
				cout << "A" << i << j << " ";
			}
		}
		cout << '\n';
	}

	return 0;
}