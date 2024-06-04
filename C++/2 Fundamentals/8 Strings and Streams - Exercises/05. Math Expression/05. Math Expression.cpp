#define _USE_MATH_DEFINES
#include <algorithm>
#include <array>
#include <cctype>
#include <chrono>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <sstream>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool validExpression(istream& exprStr)
{
	int brackets = 0;

	char c;

	while (exprStr >> c)
	{
		switch (c)
		{
		case '(': brackets++; break;
		case ')': if (brackets) brackets--;
				else return false; break;

		}
	}
	return brackets == 0;
}

int main(void)
{
	string expression; getline(cin, expression);

	istringstream exprStr(expression);

	if (validExpression(exprStr)) cout << "correct";
	else cout << "incorrect";

	return 0;
}