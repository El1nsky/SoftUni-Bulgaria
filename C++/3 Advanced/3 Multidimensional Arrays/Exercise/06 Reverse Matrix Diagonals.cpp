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
void ReadMatrix(std::istream & in, std::vector<std::vector<int>> & mat);
void PrintReverseDiagonal(std::vector<std::vector<int>> & mat, int row, int col);

int main()
{
    std::vector<std::vector<int>> mat;
    ReadMatrix(std::cin, mat);

    for (int c = mat[0].size() - 1; c >= 0; c--)
        PrintReverseDiagonal(mat, mat.size() - 1, c);

    for (int r = mat.size() - 2; r >= 0; r--)
        PrintReverseDiagonal(mat, r, 0);

    return 0;
}

void ReadMatrix(std::istream & in, std::vector<std::vector<int>> & mat)
{
    std::size_t rows, cols;
    std::cin >> rows >> cols;
    
    mat = std::vector<std::vector<int>>(rows, std::vector<int>(cols, 0));

    for (auto curRow = 0; curRow < rows; curRow++)
        for(auto curCol = 0; curCol < cols; curCol++)
            in >> mat[curRow][curCol];
}
void PrintReverseDiagonal(std::vector<std::vector<int>> & mat, int row, int col)
{
    for(;row >= 0 && col < mat[0].size(); row--, col++)
        std::cout << mat[row][col] << ' ';

        std::cout << '\n';
}
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}