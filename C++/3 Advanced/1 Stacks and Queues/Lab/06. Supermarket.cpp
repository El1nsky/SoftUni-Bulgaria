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
    std::queue<std::string> queue;
    std::string input;

    while (true)
    {
        ReadInput(input);

        if (input == "End") break;

        else if (input == "Paid")
        {
            while (!queue.empty())
            {
                std::cout << queue.front() <<'\n';
                queue.pop();
            }
        }
        else
            queue.push(input);
    }

    std::cout << queue.size() << " people remaining." << '\n';

    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
