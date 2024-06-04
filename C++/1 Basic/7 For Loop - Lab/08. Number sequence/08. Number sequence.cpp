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

using namespace std;

int main()
{
    int n; cin >> n;

    vector<int> num(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> num[i];
    }

    int maxNum = *max_element(num.begin(), num.end());
    int minNum = *min_element(num.begin(), num.end());

    cout << "Max number: " << maxNum << '\n'
         << "Min number: " << minNum;

    return 0;
}