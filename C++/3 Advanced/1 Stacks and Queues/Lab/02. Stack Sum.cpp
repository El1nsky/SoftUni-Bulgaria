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
    int curNum, n, n1, n2, sum;

    std::stack <int> numbers;
    std::string line, command;
    ReadInput(line);

    std::istringstream istr(line);

    while(istr >> curNum)
        numbers.push(curNum);
    
    while(command != "end")
    {
        ReadInput(line);

        std::istringstream istr(line);
        istr >> command;

        if (command == "add")
        {
            istr >> n1 >> n2;
            numbers.push(n1);
            numbers.push(n2);
        }
        else if (command == "remove")
        {
            istr >> n;

            if (n <= numbers.size())
            {
                while (n--)
                    numbers.pop();
            }

        }
    }

    sum = 0;
    while (numbers.size())
    {
        sum += numbers.top();
        numbers.pop();
    }

    std::cout << sum << '\n';

    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
