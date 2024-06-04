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
	string password; cin >> password;

	if (password == "s3cr3t!P@ssw0rd") { cout << "Welcome"; }

	else { cout << "Wrong password!"; }

	return 0;
}
