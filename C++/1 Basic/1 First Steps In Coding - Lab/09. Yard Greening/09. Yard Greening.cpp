#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

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
	short number; cin >> number;

	if (number % 2 == 0) { cout << "Number is even!"; }
	
	else { cout << "Number is odd!"; };

	return 0;
}