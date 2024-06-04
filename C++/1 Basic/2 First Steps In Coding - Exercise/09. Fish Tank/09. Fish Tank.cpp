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
	//cout << "Enter object's leght: ";
	short lenght; cin >> lenght;

	//cout << "Enter object's width: ";
	short width; cin >> width;

	//cout << "Enter object's height: ";
	short height; cin >> height;

	//cout << "Percentages filled: ";
	float percentages; cin >> percentages; percentages /= 100;

	float volume = lenght * width * height;
	float volumeInL = volume / 1000;
	float litersNeeded = volumeInL * (1 - percentages);

	//cout << "Liters needed: ";
	cout << fixed << setprecision(5) << litersNeeded;

	return 0;
}
