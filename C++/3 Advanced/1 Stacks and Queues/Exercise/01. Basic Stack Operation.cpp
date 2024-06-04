#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <climits>

int main()
{
    int N, S, X;

    std::cin >> N >> S >> X;
    std::stack<int> myStack;
    
    for (int i = 0; i < N; ++i)
    {
        int num;
        std::cin >> num;
        myStack.push(num);
    }

    for (int i = 0; i < S && !myStack.empty(); ++i)
    {
        myStack.pop();
    }

    if (myStack.empty())
    {
        std::cout << '0' << std::endl;
    }
    else
    {
        bool found = false;
        int smallest = INT_MAX;
        std::vector<int> elements;
        
        while (!myStack.empty())
        {
            int top = myStack.top();
            elements.push_back(top);
            if (top == X)
            {
                found = true;
            }
            if (top < smallest)
            {
                smallest = top;
            }
            myStack.pop();
        }

        if (found)
        {
            std::cout << "true" << std::endl;
        }
        else
        {
            std::cout << smallest << std::endl;
        }
    }

    return 0;
}
