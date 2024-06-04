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
    
    std::unordered_set<std::string> uniqueNames;
    std::vector<std::string> orderedNames;
    
    for (int i = 0; i < n; ++i)
    {
        std::string name;
        std::cin >> name;
        
        if (uniqueNames.insert(name).second)
        {
            orderedNames.push_back(name);
        }
    }
    
    for (const auto& name : orderedNames)
    {
        std::cout << name << std::endl;
    }
    
    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}