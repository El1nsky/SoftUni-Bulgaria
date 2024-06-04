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
    int start;

    std::string input;
    ReadInput(input);

    std::stack<int> brackets;

    for (std::size_t i = 0; i < input.size(); ++i)
    {
        if (input[i] == '(')
        {
            brackets.push(i);
        }
        else if (input[i] == ')')
        {
            start = brackets.top();
            brackets.pop();
            std::cout << input.substr(start, i - start + 1) << '\n';
        }
    }

    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
