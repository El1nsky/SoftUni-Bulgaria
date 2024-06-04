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
    int number, num;
    bool first;

    std::string input;
    ReadInput(input);

    std::queue<int> queue;
    std::istringstream iss(input);

    while (iss >> number)
    {
        queue.push(number);
    }

    first = true;

    while (!queue.empty())
    {
        num = queue.front();
        queue.pop();

        if (num % 2 == 0)
        {
            if (!first)
            {
                std::cout << ", ";
            }
            
            std::cout << num;
            first = false;
        }
    }
    std::cout << '\n';

    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
