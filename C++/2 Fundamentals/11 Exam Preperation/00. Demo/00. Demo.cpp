#include <algorithm>
#include <array>
#include <cctype>
#include <chrono>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <sstream>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <stack>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    string input;
    cin >> input;

    set<char> seen;
    string output;

    for (char c : input) 
    {
        if (c == ' ' || seen.find(c) == seen.end()) {
            output += c;
            seen.insert(c);
        }
        else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            output += c;
        }
    }

    cout << output << endl;

    return 0;
}