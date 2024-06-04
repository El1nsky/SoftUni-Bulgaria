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

	double bachelorettePartyP; cin >> bachelorettePartyP;

	int loveMessageA; cin >> loveMessageA;

	int waxRoseA; cin >> waxRoseA;

	int keychainA; cin >> keychainA;

	int caricatureA; cin >> caricatureA;

	int surprisesA; cin >> surprisesA;

	double loveMessageP = 0.60;
	double waxRoseP = 7.20;
	double keychainP = 3.60;
	double caricatureP = 18.20;
	double surprisesP = 22;
	double hosting;

	double totalProductsP = (loveMessageP * loveMessageA) + (waxRoseP * waxRoseA) +
		(keychainP * keychainA) + (caricatureP * caricatureA) + (surprisesP * surprisesA);

	int totalProductsA = loveMessageA + waxRoseA + keychainA + caricatureA + surprisesA;

	if (totalProductsA >= 25) { totalProductsP = totalProductsP - (totalProductsP * 0.35); }

	hosting = totalProductsP * 0.10;
	hosting = totalProductsP - hosting;

	if (hosting > bachelorettePartyP)
	{
		cout << "Yes! " << hosting - bachelorettePartyP << " lv left.";
	}
	else
	{
		cout << "Not enough money! " << bachelorettePartyP - hosting << " lv needed.";
	}

	return 0;
}