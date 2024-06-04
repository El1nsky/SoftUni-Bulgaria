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
	cout << fixed << setprecision(2);

	double cpuP; cin >> cpuP;

	double gpuP; cin >> gpuP;

	double ramP; cin >> ramP;

	unsigned short ramA; cin >> ramA;

	double discount; cin >> discount;

	cpuP *= 1.57;
	cpuP = cpuP - (cpuP * discount);
	gpuP *= 1.57;
	gpuP = gpuP - (gpuP * discount);
	ramP *= 1.57;
	ramP *= ramA;

	cout << "Money needed - " << cpuP + gpuP + ramP << " leva.";

	return 0;
}