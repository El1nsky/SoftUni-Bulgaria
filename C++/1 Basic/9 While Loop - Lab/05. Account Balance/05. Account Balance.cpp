#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <map>
#include <numeric>

using namespace std;

int main()
{
    string input;

    float totalAmount = 0;
    float amount;

    cout << fixed << setprecision(2);

    while (input != "NoMoreMoney") 
{
        cin >> input;

        try 
        {
            amount = stod(input);
        }
        catch (invalid_argument const& e) 
        {
            cout << "Total: " << totalAmount;
            return 0;
        }

        if (amount < 0) 
        {
            cout << "Invalid operation!\nTotal: " << totalAmount;
            return 0;
        }

        cout << "Increase: " << amount <<'\n';
        totalAmount += amount;
    }

    return 0;
}