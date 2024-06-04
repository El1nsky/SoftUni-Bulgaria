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
	float chickenMenuP = 10.35;
	float fishMenuP = 12.40;
	float vegetarianMenuP = 8.15;
	float deliveryP = 2.50;

	//cout << "Chicken menus amount: ";
	short chickenMenuN; cin >> chickenMenuN;
	chickenMenuP *= chickenMenuN;

	//cout << "Fish menus amount: ";
	short fishMenuN; cin >> fishMenuN;
	fishMenuP *= fishMenuN;

	//cout << "Vegetarian menus amount: ";
	short vegetarianMenuN; cin >> vegetarianMenuN;
	vegetarianMenuP *= vegetarianMenuN;

	float totalP = chickenMenuP + fishMenuP + vegetarianMenuP;
	float desertP = totalP * 0.20;
	totalP += desertP + deliveryP;

	//cout << "Total order price: ";
	cout << fixed << setprecision(2) << totalP;
	return 0;
}
