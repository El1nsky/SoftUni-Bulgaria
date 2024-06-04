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
	float pencils = 5.80;
	float markers = 7.20;
	float cleaner = 1.20;

	//cout << "Number of pencil packages: ";
	short pencilsN; cin >> pencilsN;

	//cout << "Number of marker packages: ";
	short markersN; cin >> markersN;

	//cout << "Cleaner amount in liters:";
	short cleanerN; cin >> cleanerN;

	//cout << "Discount: ";
	float discount; cin >> discount;
	discount /= 100;

	float totalMaterials = pencilsN * pencils + markersN * markers + cleanerN * cleaner;
	float totalPrice = totalMaterials - (totalMaterials * discount);

	cout << totalPrice;

	return 0;
}//