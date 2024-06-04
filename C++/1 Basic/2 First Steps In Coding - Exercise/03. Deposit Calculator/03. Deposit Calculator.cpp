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
	//cout << "Deposited sum:";
	float deposit; cin >> deposit;

	//cout << "Deposit period: ";
	short period; cin >> period;

	//cout << "Annual interest %: ";
	float annualInterest; cin >> annualInterest;

	float accruedInterest = deposit * annualInterest / 100;
	float monthlyInterest = accruedInterest / 12;
	float result = deposit + period * monthlyInterest;

	//cout << "Expected sum: ";
	cout << result;

	return 0;
}