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
    int rows, cols, number;
    int matrix[10][10] = {0};
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

    std::cin >> number;

    bool found = false;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == number)
            {
                std::cout << i << " " << j << std::endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        std::cout << "not found" << std::endl;
    }

    return 0;
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}