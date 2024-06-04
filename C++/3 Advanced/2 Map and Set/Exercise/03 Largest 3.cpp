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
    std::vector<double> numbers;
    double number;

    while (std::cin >> number)
    {
        numbers.push_back(number);
    }

    std::sort(numbers.begin(), numbers.end(), std::greater<double>());

    int count = std::min(3, static_cast<int>(numbers.size()));

    std::cout << '\n';
    for (int i = 0; i < count; ++i)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}