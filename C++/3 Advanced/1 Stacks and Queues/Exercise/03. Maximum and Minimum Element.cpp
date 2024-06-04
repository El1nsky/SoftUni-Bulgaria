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

void ReadInput(std::string &input);
int findMaxElt(std::stack<int> st);
int findMinElt(std::stack<int> st);

int main()
{
    
    int
    n, 
    number,
    command;
    
    std::stack<int> st;

    std::cin >> n;

    while (n--)
    {
        std::cin >> command;

        switch (command)
        {
            case 1:
                std::cin >> number;
                st.push(number);
                break;
            case 2:
                if (st.size())
                    st.pop();
                break;
            case 3:
                if(st.size())
                    std::cout << findMaxElt(st) << '\n';
                break;             
            case 4:
                if (st.size())
                    std::cout << findMinElt(st) << '\n';
                break;
            default: std::cout << "Invalid command: " << command << '\n';
        }
    }

    bool bFirst = true;

    while (st.size())
    {
        if (bFirst)
            bFirst = false;
        else
            std::cout << ", ";
        std::cout << st.top();
        st.pop();
    }

        std::cout << '\n';

    return 0;
}

void ReadInput(std::string &input)
{
    std::getline(std::cin >> std::ws, input);
}
int findMaxElt(std::stack<int> st)
{
    if (st.size() == 0)
        return std::numeric_limits<int>::min();

    int maxElt = st.top(); st.pop();
    
    while (st.size())
    {
        if (st.top() > maxElt)
            maxElt = st.top(); st.pop();
    }

    return maxElt;
}
int findMinElt(std::stack<int> st)
{
    if (st.size() == 0)
        return std::numeric_limits<int>::min();

    int minElt = st.top(); st.pop();
    
    while (st.size())
    {
        if (st.top() < minElt)
            minElt = st.top(); st.pop();
    }

    return minElt;
}

