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
#include <unordered_map>
#include <stack>
#include <queue>
#include <math.h>
#include <numeric>
#include <stack>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

void ReadInput(std::string &string);

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::set<int> set1;
    std::set<int> set2;
    int number;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> number;
        set1.insert(number);
    }

    for (int i = 0; i < m; ++i)
    {
        std::cin >> number;
        set2.insert(number);
    }

    std::set<int> intersection;
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
                          std::inserter(intersection, intersection.begin()));


    for (const auto& elem : intersection)
    {
        std::cout << elem << ' ';
    }

    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}