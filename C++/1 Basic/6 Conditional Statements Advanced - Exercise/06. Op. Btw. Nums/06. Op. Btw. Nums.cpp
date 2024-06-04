#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int number_1; cin >> number_1;

    int number_2; cin >> number_2;

    string operation; cin >> operation;

    double result = 0;

    if (operation == "+") 
    {
        result = number_1 + number_2;
        cout << number_1 << " + " << number_2 << " = " << static_cast<int>(result) << " - " << ((static_cast<int>(result) % 2 == 0) ? "even" : "odd");
    }
    else if (operation == "-") 
    {
        result = number_1 - number_2;
        cout << number_1 << " - " << number_2 << " = " << static_cast<int>(result) << " - " << ((static_cast<int>(result) % 2 == 0) ? "even" : "odd");
    }
    else if (operation == "*") 
    {
        result = number_1 * number_2;
        cout << number_1 << " * " << number_2 << " = " << static_cast<int>(result) << " - " << ((static_cast<int>(result) % 2 == 0) ? "even" : "odd");
    }
    else if (operation == "/") 
    {
        if (number_2 == 0) 
        {
            cout << "Cannot divide " << number_1 << " by zero";
        }
        else 
        {
            result = static_cast<double>(number_1) / static_cast<double>(number_2);
            cout << number_1 << " / " << number_2 << " = " << fixed << setprecision(2) << result;
        }
    }
    else if (operation == "%")
    {
        if (number_2 == 0) 
        {
            cout << "Cannot divide " << number_1 << " by zero";
        }
        else 
        {
            result = number_1 % number_2;
            cout << number_1 << " % " << number_2 << " = " << static_cast<int>(result);
        }
    }

    return 0;
}
