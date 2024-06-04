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
    int tosses;
    std::queue<std::string> children;
    std::string input, child;

    ReadInput(input);
    std::istringstream iss(input);

    while (iss >> child)
        children.push(child);
    
    std::cin >> tosses;

    while (children.size() > 1)
    {
        for (std::size_t i = 0; i < tosses - 1; ++i)
        {
            children.push(children.front());
            children.pop();
        }

        std::cout << "Removed " << children.front() << '\n';
        children.pop();
    }

    std::cout << "Last is " << children.front() << '\n';

    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
