#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::ws;
using std::fixed;
using std::setprecision;
using std::string;

int main()
{
	//cout << "Number of pages: ";
	short pages; cin >> pages;

	//cout << "Pages red per hour: ";
	short pagesPerHour; cin >> pagesPerHour;

	//cout << "Number of days to read the book: ";
	short days; cin >> days;

	short result = (pages / pagesPerHour) / days;

	cout << result;

	return 0;
}//