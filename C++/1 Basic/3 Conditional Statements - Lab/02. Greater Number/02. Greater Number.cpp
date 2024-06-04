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
	short num1; cin >> num1;
	short num2; cin >> num2;

	if (num1 >= num2) { cout << num1; }

	else { cout << num2; }

	return 0;
}
