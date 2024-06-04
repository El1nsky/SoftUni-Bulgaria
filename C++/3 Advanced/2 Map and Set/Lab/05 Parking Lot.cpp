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
    std::set<std::string> parkingLot;
    std::string command;

    while (std::getline(std::cin, command) && command != "END")
    {
        std::string direction = command.substr(0, command.find(','));
        std::string carNumber = command.substr(command.find(',') + 1);

        if (direction == "IN")
        {
            parkingLot.insert(carNumber);
        }
        else if (direction == "OUT")
        {
            parkingLot.erase(carNumber);
        }
    }

    if (parkingLot.empty())
    {
        std::cout << "Parking Lot is Empty" << std::endl;
    }
    else
    {
        for (const auto& carNumber : parkingLot)
        {
            std::cout << carNumber << std::endl;
        }
    }

    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}