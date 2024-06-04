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
	float speed; cin >> speed;

	if (speed <= 10) { cout << "slow"; }

	else if (speed > 10 & speed <= 50) { cout << "average"; }

	else if (speed > 50 & speed <= 150) { cout << "fast"; }

	else if (speed > 150 & speed <= 1000) { cout << "ultra fast"; }

	else if (speed > 1000) { cout << "extremely fast"; }

	return 0;
}