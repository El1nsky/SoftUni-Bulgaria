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

void fillPatternA(int matrix[][100], int n)
{
    int value = 1;
    for (int col = 0; col < n; ++col)
    {
        for (int row = 0; row < n; ++row)
        {
            matrix[row][col] = value++;
        }
    }
}

void fillPatternB(int matrix[][100], int n)
{
    int value = 1;
    for (int col = 0; col < n; ++col)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < n; ++row)
            {
                matrix[row][col] = value++;
            }
        }
        else
        {
            for (int row = n - 1; row >= 0; --row)
            {
                matrix[row][col] = value++;
            }
        }
    }
}

int main()
{
    int n;
    char pattern;
    std::cin >> n;
    std::cin.ignore(); // Ignore the comma
    std::cin >> pattern;

    int matrix[100][100];

    if (pattern == 'A')
    {
        fillPatternA(matrix, n);
    }
    else if (pattern == 'B')
    {
        fillPatternB(matrix, n);
    }

    // Print the matrix
    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            std::cout << matrix[row][col];
            if (col < n - 1)
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}