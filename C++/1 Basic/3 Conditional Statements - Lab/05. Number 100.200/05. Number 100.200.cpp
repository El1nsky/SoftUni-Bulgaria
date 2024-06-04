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
	short num; cin >> num;

	if (num < 100) { cout << "Less than 100"; }

	else if (num >= 100 & num <= 200) { cout << "Between 100 and 200"; }

	else { cout << "Greater than 200"; }

	return 0;
}
