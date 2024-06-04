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
    
    std::map<std::string, std::vector<double>> studentRecords;
    
    for (int i = 0; i < n; ++i)
    {
        std::string name;
        double grade;
        std::cin >> name >> grade;
        studentRecords[name].push_back(grade);
    }
    
    for (const auto& student : studentRecords)
    {
        std::cout << student.first << " -> ";
        double sum = 0.0;
        for (double grade : student.second)
        {
            std::cout << std::fixed << std::setprecision(2) << grade << " ";
            sum += grade;
        }
        double average = sum / student.second.size();
        std::cout << "(avg: " << std::fixed << std::setprecision(2) << average << ")" << std::endl;
    }
    
    return 0;
}

void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}