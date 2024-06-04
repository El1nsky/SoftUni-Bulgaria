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
    int smaller, bigger;
    cin >> smaller >> bigger;

    for (int i = smaller; i <= bigger; i++)
    {
        string num = to_string(i);
        int length = num.length();

        int evenSum = 0;
        int oddSum = 0;
        int process = i;

        for (int ii = 0; ii < length; ii++)
        {
            int modul = process % 10;

            if ((ii + 1) % 2 == 0)
            {
                evenSum += modul;
            }
            else
            {
                oddSum += modul;
            }

            process = (process - modul) / 10;
        }

        if (oddSum == evenSum)
        {
            cout << i << " ";
        }
    }

    return 0;
}