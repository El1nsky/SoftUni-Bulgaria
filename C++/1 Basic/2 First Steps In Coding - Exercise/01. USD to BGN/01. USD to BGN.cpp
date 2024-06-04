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
	cout << "Convert USD to BGN: ";

	double usd; cin >> usd;
	double bgn = usd * 1.79549;

	cout << bgn;

	return 0;
}