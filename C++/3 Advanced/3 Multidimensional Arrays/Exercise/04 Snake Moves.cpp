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

    std::string snake;
    std::cin >> snake;

    std::vector<std::vector<char>> matrix(rows, std::vector<char>(cols));
    int snake_length = snake.length();
    int index = 0;

    for (int i = 0; i < rows; ++i)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; ++j)
            {
                matrix[i][j] = snake[index];
                index = (index + 1) % snake_length;
            }
        }
        else
        {
            for (int j = cols - 1; j >= 0; --j)
            {
                matrix[i][j] = snake[index];
                index = (index + 1) % snake_length;
            }
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}