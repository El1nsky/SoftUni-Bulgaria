#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;

int main()
{
	//cout << "Enter side A: ";
	short a; cin >> a;

	//cout << "Enter side B: ";
	short b; cin >> b;

	short result = a * b;
	cout << result;

	return 0;
}