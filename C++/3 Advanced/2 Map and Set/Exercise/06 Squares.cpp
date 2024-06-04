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

bool isSquare(int num)
{
    if (num < 0)
    {
        return false;
    }
    int root = static_cast<int>(std::sqrt(num));
    return root * root == num;
}

int main()
{
    std::vector<int> numbers;
    int number;

    while (std::cin >> number)
    {
        numbers.push_back(number);
    }

    std::vector<int> square_numbers;
    for (int num : numbers)
    {
        if (isSquare(num))
        {
            square_numbers.push_back(num);
        }
    }

    std::sort(square_numbers.begin(), square_numbers.end(), std::greater<int>());

    for (size_t i = 0; i < square_numbers.size(); ++i)
    {
        std::cout << square_numbers[i];
        if (i < square_numbers.size() - 1)
        {
            std::cout << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}