#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cmath>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <list>
#include <map>
#include <climits>
#include <stdlib.h>
#include <cctype>

using namespace std;

bool validatePassword(string password, bool& lengthValidation, bool& contentValidation, bool& digitsValidation);

int main()
{

	return 0;
}

bool validatePassword(string password, bool& lengthValidation, bool& contentValidation, bool& digitsValidation)
{
	contentValidation = true;

	int digitsNumber = 0;

	for (short i = 0; i < password.length(); i++)
	{
		char c = password[i];

		if (isdigit(c)) digitsNumber++;
		else if (!isalnum(c)) contentValidation = false;

		digitsValidation = (digitsNumber >= 2);
		lengthValidation = (password.length() >= 6) && (password.length() <= 10);

		return (lengthValidation == true && contentValidation == true && digitsValidation == true);
	}
}

int main()
{
	string pass;

	cin >> pass;

	bool digitsV, lengthV, contentV;

	if (validatePassword(pass, lengthV, contentV, digitsV))
		cout << "Password is valid";
	else
	{
		if (!lengthV) cout << "Password must be between 6 and 10 characters" << '\n';
		if (!contentV) cout << "Password must consists only of letters and digits" << '\n';
		if (!digitsV) cout << "Password must have at least 2 digits" << '\n';
	}

	return 0;
}