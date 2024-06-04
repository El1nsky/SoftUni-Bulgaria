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
bool isBalanced(const std::string &expression);

int main()
{
    std::string expression;

    while (std::getline(std::cin, expression))
    {
        if (isBalanced(expression))
        {
            std::cout << "YES" << '\n'; break;
        }
        else
        {
            std::cout << "NO" << '\n'; break;
        }
    }

    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}
bool isBalanced(const std::string &expression)
{
    std::stack<char> s;

    for (char ch : expression)
    {
        if (ch == '(' || ch == '{' || ch == '[')
            s.push(ch);
        else
        {
            if (s.empty())
                return false;

            char top = s.top();
            s.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
                return false;
        }
    }
    
    return s.empty();
}