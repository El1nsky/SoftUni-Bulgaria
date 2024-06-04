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
	float safetyNylonP = 1.50;
	float paintP = 14.50;
	float paintThinnerP = 5.00;
	float bagsP = 0.40;

	//cout << "Nylon amount: ";
	short safetyNylonN; cin >> safetyNylonN;
	safetyNylonP *= safetyNylonN + 2;

	//cout << "Paint amount: ";
	short paintL; cin >> paintL;
	paintP *= 10.00F / 100 * paintL + paintL;

	//cout << "Thinner amount: ";
	short paintThinnerL; cin >> paintThinnerL;
	paintThinnerP *= paintThinnerL;

	//cout << "Hours of work: ";
	short hours; cin >> hours;

	float totalP = safetyNylonP + paintP + paintThinnerP + bagsP;
	float workersPayment = (totalP * 0.30) * hours;
	totalP += workersPayment;

	//cout << "Total Price: ";
	cout << fixed << setprecision(2) << totalP;

	return 0;
}
