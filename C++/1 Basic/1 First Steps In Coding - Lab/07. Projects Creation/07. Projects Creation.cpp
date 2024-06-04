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
	//cout << "Architect name: ";
	string name; getline(cin >> ws, name);

	//cout << "Number of projects to make: ";
	short projects; cin >> projects;

	cout << "The architect " << name << " will need " << projects * 3 << " hours to complete " << projects << " project/s.";

	return 0;
}