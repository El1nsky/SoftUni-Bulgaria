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
    int foodQuantity, order, maxOrder;
    std::cin >> foodQuantity; std::cin.ignore(); 

    std::string input;
    ReadInput(input);
    std::istringstream iss(input);

    std::queue<int> orders;
    order, maxOrder = 0;

    while (iss >> order)
    {
        orders.push(order);
        if (order > maxOrder)
            maxOrder = order;
    }

    std::cout << maxOrder << '\n';

    while (!orders.empty())
    {
        if (foodQuantity >= orders.front())
        {
            foodQuantity -= orders.front();
            orders.pop();
        }
        else
            break;
    }

    if (orders.empty())
        std::cout << "Orders complete" << '\n';
    else
    {
        std::cout << "Orders left: ";

        while (!orders.empty())
        {
            std::cout << orders.front();
            orders.pop();
            if (!orders.empty())
            {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }

    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
