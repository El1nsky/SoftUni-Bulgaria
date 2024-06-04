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
    int rows, columns;
    std::cin >> rows >> columns;

    int matrix[100][100]; // Assuming the matrix will not be larger than 100x100

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < columns; ++j)
    {
        int columnSum = 0;
        for (int i = 0; i < rows; ++i)
        {
            columnSum += matrix[i][j];
        }
        std::cout << columnSum << std::endl;
    }

    return 0;
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}