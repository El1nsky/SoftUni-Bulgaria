#include <iostream>

int main() 
{

    unsigned short size; std::cin >> size;
    unsigned short array[size];

    for (unsigned short i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

//    // Check if the compiler supports C++20
//#if __cplusplus >= 202002L
//    std::cout << "You are using C++20 or later" << std::endl;
//#elif __cplusplus >= 201703L
//    std::cout << "You are using C++17" << std::endl;
//#elif __cplusplus >= 201402L
//    std::cout << "You are using C++14" << std::endl;
//#elif __cplusplus >= 201103L
//    std::cout << "You are using C++11" << std::endl;
//#elif __cplusplus >= 199711L
//    std::cout << "You are using C++98" << std::endl;
//#else
//    std::cout << "You are using pre-standard C++" << std::endl;
//#endif

    return 0;
}
