#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::ws;
using std::fixed;
using std::setprecision;
using std::string;

int main()
{
    short inputHours, inputMinutes;
    cin >> inputHours >> inputMinutes;

    short totalMinutes = (inputHours * 60) + inputMinutes + 15;

    short outputHours = totalMinutes / 60;
    short outputMinutes = totalMinutes % 60;

    if (outputHours == 24) 
    {
        if (outputMinutes < 10) 
        {
            cout << "0:0" << outputMinutes;
        }
        else 
        {
            cout << "0:" << outputMinutes;
        }
    }
    else if (outputMinutes < 10) 
    {
        cout << outputHours << ":0" << outputMinutes;
    }
    else 
    {
        cout << outputHours << ":" << outputMinutes;
    }

	return 0;
}