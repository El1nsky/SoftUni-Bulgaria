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
    std::string input;
    ReadInput(input);

    std::unordered_map<std::string, int> word_count;
    std::vector<std::string> order;

    std::istringstream iss(input);
    std::string word;
    
    while (iss >> word)
    {
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);

        if (word_count.find(word) == word_count.end())
        {
            order.push_back(word);
        }

        word_count[word]++;
    }

    bool first = true;
    for (const auto& w : order)
    {
        if (word_count[w] % 2 != 0)
        {
            if (!first)
            {
                std::cout << ", ";
            }
            std::cout << w;
            first = false;
        }
    }
    std::cout << std::endl;

    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}