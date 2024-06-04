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

bool compareMatrices(int matrix1[10][10], int rows1, int cols1, int matrix2[10][10], int rows2, int cols2)
{
    if (rows1 != rows2 || cols1 != cols2)
    {
        return false;
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int rows1, rows2, cols1 = 0, cols2 = 0;
    int matrix1[10][10] = {0};
    int matrix2[10][10] = {0};
    std::string line;

    std::cin >> rows1;
    std::cin.ignore(); 
    for (int i = 0; i < rows1; i++)
    {
        std::getline(std::cin, line);
        std::stringstream ss(line);
        int value, j = 0;
        while (ss >> value)
        {
            matrix1[i][j++] = value;
        }
        if (i == 0) 
        {
            cols1 = j;
        }
    }

    std::cin >> rows2;
    std::cin.ignore(); 
    for (int i = 0; i < rows2; i++)
    {
        std::getline(std::cin, line);
        std::stringstream ss(line);
        int value, j = 0;
        while (ss >> value)
        {
            matrix2[i][j++] = value;
        }
        if (i == 0) 
        {
            cols2 = j;
        }
    }

    if (compareMatrices(matrix1, rows1, cols1, matrix2, rows2, cols2))
    {
        std::cout << "equal" << std::endl;
    }
    else
    {
        std::cout << "not equal" << std::endl;
    }

    return 0;
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}