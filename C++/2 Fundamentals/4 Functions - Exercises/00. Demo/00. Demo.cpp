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

bool charactersValidation(string password);
bool isAlphaNumeric(string password);
bool hasAtLeastTwoDigits(string password);
void passwordValidator();

int main()
{
	passwordValidator();
}

bool charactersValidation(string password)
{
	if (password.length() >= 6 && password.length() <= 10) return true;
	else return false;
}
bool isAlphaNumeric(string password)
{
	for (char c : password)
	{
		if (!isalnum(c)) return false;
	}

	return true;
}
bool hasAtLeastTwoDigits(string password)
{
	unsigned short digitCount = 0;

	for (char c : password)
	{
		if (isdigit(c))
		{
			digitCount++;
		}
	}

	return digitCount >= 2;
}
void passwordValidator()
{
	string password; cin >> password;

	if (!charactersValidation(password)) cout << "Password must be between 6 and 10 characters" << '\n';
	if (!isAlphaNumeric(password)) cout << "Password must consist only of letters and digits" << '\n';
	if (!hasAtLeastTwoDigits(password)) cout << "Password must have at least 2 digits" << '\n';
	if (charactersValidation(password) && isAlphaNumeric(password) && hasAtLeastTwoDigits(password) == true) cout << "Password is valid";
}