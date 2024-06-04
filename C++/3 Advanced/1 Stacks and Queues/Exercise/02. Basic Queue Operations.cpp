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
    int N, S, X, num, minElement;
    bool found;

    std::size_t i;
    std::queue<int> q, temp;

    std::cin >> N >> S >> X;

    for (i = 0; i < N; ++i)
    {
        std::cin >> num;
        q.push(num);
    }

    for (i = 0; i < S && !q.empty(); ++i)
        q.pop();
    
    found = false;
    temp = q;

    while (!temp.empty())
    {
        if (temp.front() == X)
        {
            found = true;
            break;
        }
        temp.pop();
    }

    if (found)
        std::cout << "true" << '\n';
    
    else
    {
        if (q.empty())
            std::cout << 0 << '\n';
        
        else
        {
            minElement = q.front();
            while (!q.empty())
            {
                if (q.front() < minElement)
                    minElement = q.front();
                
                q.pop();
            }

            std::cout << minElement << '\n';
        }
    }

    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
