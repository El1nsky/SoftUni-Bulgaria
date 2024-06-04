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
	//cout << "Enter how many inches to convert: ";
	int inches; cin >> inches;

	float cantimeters = inches * 2.54f;

	cout << setprecision(1) << fixed << cantimeters;

	return 0;
}