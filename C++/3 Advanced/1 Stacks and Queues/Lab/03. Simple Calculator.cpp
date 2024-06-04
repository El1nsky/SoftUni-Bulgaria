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
    int result, num;
    char op;

    std::string input;
    ReadInput(input);
    
    std::istringstream iss(input);

    num = 0;
    op = '+';

    while (iss >> num)
    {
        if (op == '+')
        {
            result += num;
        }
        else if (op == '-')
        {
            result -= num;
        }
        iss >> op;
    }

    std::cout << result << '\n';

    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
