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

using namespace std;

void integerSign();

int main() 
{
	integerSign();

	return 0;
}

void integerSign()
{
	int input;
	cin >> input;

	if (input > 0) cout << "The number " << input << " is positive.";
	else if (input < 0) cout << "The number " << input << " is negative.";
	else cout << "The number " << input << " is zero.";
}
