#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <map>

using namespace std;

int main() {
    int talkingPuppets = 3;
    int trucks = 2;
    double puzzles = 2.60;
    double teddyBears = 4.10;
    double minions = 8.20;

    double excursionPrice;
    int puzzleAmount, talkingPuppetsAmount, teddyBearAmount, minionsAmount, trucksAmount;

    cin >> excursionPrice >> puzzleAmount >> talkingPuppetsAmount >> teddyBearAmount >> minionsAmount >> trucksAmount;

    double sum = (puzzleAmount * puzzles) + (talkingPuppetsAmount * talkingPuppets) + (teddyBearAmount * teddyBears) + (minionsAmount * minions) + (trucksAmount * trucks);
    int totalToys = puzzleAmount + talkingPuppetsAmount + teddyBearAmount + minionsAmount + trucksAmount;

    cout << fixed << setprecision(2);

    if (totalToys >= 50) {
        sum = sum - (sum * 0.25);
    }

    sum = sum - (sum * 0.1);

    if (sum >= excursionPrice) {
        double result0 = sum - excursionPrice;
        cout << "Yes! " << result0 << " lv left." << endl;
    }
    else {
        double result1 = excursionPrice - sum;
        cout << "Not enough money! " << result1 << " lv needed." << endl;
    }

    return 0;
}
