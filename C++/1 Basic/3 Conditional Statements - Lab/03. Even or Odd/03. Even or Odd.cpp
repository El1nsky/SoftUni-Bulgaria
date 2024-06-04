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

	if (num % 2 == 0) { cout << "even"; }

	else { cout << "odd"; }

	return 0;
}
