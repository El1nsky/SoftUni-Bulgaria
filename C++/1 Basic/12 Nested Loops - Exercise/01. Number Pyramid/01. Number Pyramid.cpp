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
#include <climits> 

using namespace std;

int main()
{
    short n; cin >> n;

    short current = 1;
    bool isBigger = false;

    for (short rows = 1; rows <= n; rows++)
    {
        for (short cols = 1; cols <= rows; cols++)
        {
            if (current > n)
            {
                isBigger = true;
                break;
            }
            cout << current << " ";
            current++;
        }
        if (isBigger)
        {
            break;
        }
        cout << '\n';
    }

    return 0;
}