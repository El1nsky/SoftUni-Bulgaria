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
    std::unordered_map<std::string, std::string> companies;
    std::string name, id;

    while (true)
    {
        std::cin >> name;
        if (name == "end")
        {
            break;
        }
        std::cin >> id;
        companies[id] = name;
    }

    std::cin >> id;

    if (companies.find(id) != companies.end())
    {
        std::cout << companies[id] << " " << id << std::endl;
    }
    else
    {
        std::cout << "[not found]" << std::endl;
    }
    
    return 0;
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}