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
    
    std::map<std::string, std::map<std::string, std::set<std::string>>> continentMap;
    
    for (int i = 0; i < n; ++i)
    {
        std::string continent, country, city;
        std::cin >> continent >> country >> city;
        continentMap[continent][country].insert(city);
    }
    
    for (const auto& continent : continentMap)
    {
        std::cout << continent.first << ":" << std::endl;
        for (const auto& country : continent.second)
        {
            std::cout << "  " << country.first << " -> ";
            bool first = true;
            for (const auto& city : country.second)
            {
                if (!first)
                {
                    std::cout << ", ";
                }
                std::cout << city;
                first = false;
            }
            std::cout << std::endl;
        }
    }
    
    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}