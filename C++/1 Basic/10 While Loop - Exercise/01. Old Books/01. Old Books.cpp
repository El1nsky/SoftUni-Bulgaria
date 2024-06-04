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
	string bookSearch; getline(cin >> ws, bookSearch);
	string input;

	short bookCounter = 0;

	while (bookSearch != input)
	{
		getline(cin >> ws, input);
		
		if (input == "No More Books")
		{
			cout << "The book you search is not here!\nYou checked " << bookCounter << " books.";
			return 0;
		}

		if (input != bookSearch) { bookCounter++; }
	}

	cout << "You checked " << bookCounter << " books and found it.";

	return 0;
}