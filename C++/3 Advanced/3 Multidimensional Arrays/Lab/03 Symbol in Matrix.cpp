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
    int n;
    std::cin >> n;

    char matrix[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    char symbol;
    std::cin >> symbol;

    bool found = false;
    int row, col;

    for (int i = 0; i < n && !found; ++i)
    {
        for (int j = 0; j < n && !found; ++j)
        {
            if (matrix[i][j] == symbol)
            {
                row = i;
                col = j;
                found = true;
            }
        }
    }

    if (found)
    {
        std::cout << "(" << row << ", " << col << ")" << std::endl;
    }
    else
    {
        std::cout << symbol << " does not occur in the matrix" << std::endl;
    }

    return 0;
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}