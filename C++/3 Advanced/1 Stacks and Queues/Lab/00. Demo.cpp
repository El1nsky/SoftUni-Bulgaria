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
    int temp;
    bool isFirst = true;

    std::queue<int> evenNumbers;

    std::string input;
    ReadInput(input);
    std::istringstream iss(input); 


    while (iss >> temp)
        {
        if (temp % 2 == 0)
            evenNumbers.push(temp);
        }

    while (!evenNumbers.empty())
    {
        if (!isFirst)
            std::cout << ", ";
        std::cout << evenNumbers.front();
        evenNumbers.pop();
        
        isFirst = false;
    }
    
    std::cout << '\n';

    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}


