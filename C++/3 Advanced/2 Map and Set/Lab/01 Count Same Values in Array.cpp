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
    std::map<double, unsigned> occurrences;
    std::vector<double> order;

    std::string buff;
    ReadInput(buff);
    std::istringstream istr(buff);

    double curr;
    while (istr >> curr)
    {
        if (occurrences.find(curr) == occurrences.end())
            order.push_back(curr);
        
        occurrences[curr]++;
    }
    
    for (auto val : order)
        std::cout << val << " - " << occurrences[val] << " times" << '\n';
    
    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}