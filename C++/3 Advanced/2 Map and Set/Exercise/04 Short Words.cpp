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
    std::getline(std::cin, input);

    std::set<std::string> unique_words;
    std::istringstream iss(input);
    std::string word;

    while (iss >> word)
    {
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);

        word.erase(std::remove_if(word.begin(), word.end(), [](char c) { return !std::isalnum(c) && c != '-'; }), word.end());

        if (word.length() < 5)
        {
            unique_words.insert(word);
        }
    }

    bool first = true;
    for (const auto& w : unique_words)
    {
        if (!first)
        {
            std::cout << ", ";
        }
        std::cout << w;
        first = false;
    }
    std::cout << std::endl;

    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}