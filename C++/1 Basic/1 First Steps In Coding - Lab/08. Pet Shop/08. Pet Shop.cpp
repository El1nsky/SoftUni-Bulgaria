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
	//cout << "Amount of dog food: 
	short dogFood; cin >> dogFood;

	//cout << "Amount of cat food: ";
	short catFood; cin >> catFood;

	float dogFoodPrice = 2.50;
	float catFoodPrice = 4;
	float totalPrice = dogFood * dogFoodPrice + catFood * catFoodPrice;

	cout << totalPrice << " lv.";
	
	return 0;
}