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
    std::map<std::string, int> resources;
    std::vector<std::string> order;
 
    std::string name;
    std::cin >> name;

    while (name != "stop")
    {
        int quantity;
        std::cin >> quantity;

        std::map<std::string, int>::iterator itI = resources.find(name);

        if (itI != resources.end())
        {
            itI->second += quantity;
        }
        else
        {
            resources[name] = quantity;
            order.push_back(name);
        }

        std::cin >> name;

    }

    for (auto curr : order)
    {
        std::cout << curr << " -> " << resources[curr] << '\n';  
    }
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}