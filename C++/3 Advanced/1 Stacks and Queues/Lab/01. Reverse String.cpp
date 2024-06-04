#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string input;
    std::getline(std::cin >> std::ws, input);
    std::reverse(input.begin(), input.end());

    std::cout << input;
    
    return 0;
}