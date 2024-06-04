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

int main()
{
	short num1; cin >> num1;
	short num2; cin >> num2;

	if (num1 < num2) { cout << num1 << ' ' << num2; }
	else cout << num2 << ' ' << num1;

	return 0;
}