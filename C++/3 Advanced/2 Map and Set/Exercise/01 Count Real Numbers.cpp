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
    std::map<double, int> count_map;
    double number;

    // Read input until end of input
    while (std::cin >> number)
    {
        count_map[number]++;
    }

    // Print the numbers and their counts in ascending order
    for (const auto& pair : count_map)
    {
        std::cout << pair.first << " -> " << pair.second << std::endl;
    }

    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}