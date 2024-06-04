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
	//cout << "Your first name is: ";
	string firstName; cin >> firstName;

	//cout << "Your last name is: ";
	string lastName; cin >> lastName;

	//cout << "Your age is: ";
	short age; cin >> age;

	//cout << "City name: ";
	string city; getline(cin >> ws, city);

	cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << city << ".";

	return 0;
}