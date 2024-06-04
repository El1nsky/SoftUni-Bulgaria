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
    int n;
    std::cin >> n;
    std::unordered_map<int, int> count_map;
    int number;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> number;
        count_map[number]++;
    }
    
    for (const auto& pair : count_map)
    {
        if (pair.second % 2 == 0)
        {
            std::cout << pair.first << std::endl;
            break;
        }
    }

    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}