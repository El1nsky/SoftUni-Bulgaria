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

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    long previousValue = 0, currentValue = 0;
    std::string token;

    while (iss >> token) {
        // Check if the token is an operator
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            char op = token[0];
            switch (op) {
            case '+':
                previousValue += currentValue;
                break;
            case '-':
                previousValue -= currentValue;
                break;
            case '*':
                previousValue *= currentValue;
                break;
            case '/':
                previousValue /= currentValue; // Integer division
                break;
            }
        }
        else {
            // Token is a number, update previousValue and currentValue
            previousValue = currentValue;
            currentValue = std::stol(token);
        }
    }

    std::cout << "Current Value: " << currentValue << std::endl;
    std::cout << "Previous Value: " << previousValue << std::endl;

    return 0;
}