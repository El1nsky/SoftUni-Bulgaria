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
    int rows, cols;
    std::cin >> rows >> cols;

    int matrix[100][100];

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    int maxSum = INT_MIN;
    int bestRow = 0, bestCol = 0;

    for (int i = 0; i <= rows - 3; ++i)
    {
        for (int j = 0; j <= cols - 3; ++j)
        {
            int currentSum = 0;
            for (int k = 0; k < 3; ++k)
            {
                for (int l = 0; l < 3; ++l)
                {
                    currentSum += matrix[i + k][j + l];
                }
            }
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
                bestRow = i;
                bestCol = j;
            }
        }
    }

    std::cout << "Sum = " << maxSum << std::endl;
    for (int i = bestRow; i < bestRow + 3; ++i)
    {
        for (int j = bestCol; j < bestCol + 3; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}