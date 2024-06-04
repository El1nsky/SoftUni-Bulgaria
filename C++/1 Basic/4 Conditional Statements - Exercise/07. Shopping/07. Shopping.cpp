#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	float budged; cin >> budged;

	short gpuN; cin >> gpuN;
	short cpuN; cin >> cpuN;
	short memN; cin >> memN;

	float gpuP = 250; gpuP *= gpuN;
	float cpuP = gpuP * 0.35F; cpuP *= cpuN;
	float memP = gpuP * 0.10F; memP *= memN;

	float totalP = gpuP + cpuP + memP;

	if (gpuN > cpuN) { totalP -= totalP * 0.15F; }

	if (budged >= totalP)
	{
		cout << "You have " << fixed << setprecision(2) << budged - totalP << " leva left!";
	}
	else
	{
		cout << "Not enough money! You need " << fixed << setprecision(2) << abs(budged - totalP) << " leva more!";
	}

	return 0;
}
