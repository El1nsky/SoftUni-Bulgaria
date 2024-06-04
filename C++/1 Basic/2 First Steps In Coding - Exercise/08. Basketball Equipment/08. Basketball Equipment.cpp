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
	//cout << "Annual tax price: ";
	short taxP; cin >> taxP;

	float basketShoesP = taxP * 0.60;
	float basketOutfitP = basketShoesP * 0.80;
	float basketBallP = basketOutfitP / 4;
	float basketAccessoriesP = basketBallP / 5; 
	float totalExpenses = taxP + basketShoesP + basketOutfitP + basketBallP + basketAccessoriesP;

	//cout << "Total Expenses: ";
	cout << fixed << setprecision(2) << totalExpenses;

	return 0;
}
