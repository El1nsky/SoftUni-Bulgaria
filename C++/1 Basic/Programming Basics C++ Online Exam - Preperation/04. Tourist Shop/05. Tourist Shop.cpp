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
	cout << fixed << setprecision(2);

	double budged; cin >> budged;

	string productN = "";

	double productP = 0;
	double totalProductP = 0;
	short productDiscount = 0;
	short productA = 0;

	while (true)
	{
		getline(cin >> ws, productN);
		if (productN == "Stop")
		{
			cout << "You bought " << productA << " products for "
				<< totalProductP << " leva.";
			return 0;
		}

		cin >> productP;
		productA++;
		productDiscount++;

		if (productDiscount == 3) { productP /= 2; productDiscount = 0; }
		totalProductP += productP;

		if (productP > budged || totalProductP > budged)
		{
			cout << "You don't have enough money!\nYou need " << totalProductP - budged << " leva!";
			return 0;
		}
	}
}