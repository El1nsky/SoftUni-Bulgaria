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
    int n,
        petrol,
        distance,
        start,
        surplus,
        deficit;

    std::cin >> n;
    std::size_t i;

    std::vector<std::pair<int, int>> petrolPumps(n);
    for (i = 0; i < n; ++i)
    {
        std::cin >> petrol >> distance;
        petrolPumps[i] = {petrol, distance};
    }

    start = 0, surplus = 0, deficit = 0;

    for (i = 0; i < n; ++i)
    {
        surplus += petrolPumps[i].first - petrolPumps[i].second;
        if (surplus < 0)
        {
            start = i + 1;
            deficit += surplus;
            surplus = 0;
        }
    }

    if (surplus + deficit >= 0)
    {
        std::cout << start << '\n';
    }
    else
        std::cout << -1 << '\n';
        
    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
