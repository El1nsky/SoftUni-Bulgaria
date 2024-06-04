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

int count2x2Squares(char matrix[50][50], int rows, int cols)
{
    int count = 0;

    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < cols - 1; j++)
        {
            if (matrix[i][j] == matrix[i][j + 1] &&
                matrix[i][j] == matrix[i + 1][j] &&
                matrix[i][j] == matrix[i + 1][j + 1])
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int rows, cols;
    char matrix[50][50];
    std::string line;

    std::cin >> rows >> cols;
    std::cin.ignore(); 

    for (int i = 0; i < rows; i++)
    {
        std::getline(std::cin, line);
        std::stringstream ss(line);
        for (int j = 0; j < cols; j++)
        {
            ss >> matrix[i][j];
        }
    }

    int result = count2x2Squares(matrix, rows, cols);

    std::cout << result << std::endl;

    return 0;
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}