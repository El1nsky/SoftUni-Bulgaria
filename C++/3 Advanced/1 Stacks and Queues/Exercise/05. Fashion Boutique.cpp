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

void ReadInput(std::string &input);

int main()
{
    int value,
        rackCapacity,
        currentSum,
        racks;
    std::vector<int> clothes;
    std::string input;
    ReadInput(input);
    std::istringstream iss(input);

    while (iss >> value)
    {
        clothes.push_back(value);
    }

    std::cin >> rackCapacity;

    currentSum = 0;
    racks = 1;

    for (int i = clothes.size() - 1; i >= 0; --i)
    {
        if (currentSum + clothes[i] <= rackCapacity)
        {
            currentSum += clothes[i];
        }
        else
        {
            ++racks;
            currentSum = clothes[i];
        }
    }

    std::cout << racks << '\n';

    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
