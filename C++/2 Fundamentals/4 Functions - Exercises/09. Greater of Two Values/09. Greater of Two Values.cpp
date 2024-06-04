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

void compareInts();
void compareChars();
void compareString();

int main()
{
	string type; getline(cin >> ws, type);

	if (type == "int") compareInts();
	else if (type == "char") compareChars();
	else compareString();
}

void compareInts()
{
	int a1, a2;

	cin >> a1 >> a2;

	if (a1 >= a2) cout << a1;
	else cout << a2;
}
void compareChars()
{
	char a1, a2;

	cin >> a1 >> a2;

	if (a1 >= a2) cout << a1;
	else cout << a2;
}
void compareString()
{
	string a1, a2;

	getline(cin >> ws, a1);
	getline(cin >> ws, a2);

	if (a1 >= a2) cout << a1;
	else cout << a2;
}
