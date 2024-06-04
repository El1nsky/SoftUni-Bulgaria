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
    int n; cin >> n;

    for (int num = 1111; num <= 9999; num++)
    {
        int currentNum = num;
        bool isSpecial = true;

        while (currentNum > 0)
        {
            int digit = currentNum % 10;
            currentNum /= 10;

            if (digit == 0 || n % digit != 0)
            {
                isSpecial = false;
                break;
            }
        }

        if (isSpecial)
        {
            cout << num << " ";
        }
    }

    return 0;
}