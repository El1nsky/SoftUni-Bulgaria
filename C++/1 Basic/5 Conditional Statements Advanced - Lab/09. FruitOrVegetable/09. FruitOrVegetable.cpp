#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string product, day;
    std::string work_days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
    std::string weekend[] = { "Saturday", "Sunday" };
    std::string product_1[] = { "banana", "apple", "orange", "grapefruit", "kiwi", "pineapple", "grapes" };
    double quantity;

    std::cin >> product;
    std::cin >> day;
    std::cin >> quantity;

    if (std::find(std::begin(product_1), std::end(product_1), product) != std::end(product_1)) {
        if (std::find(std::begin(work_days), std::end(work_days), day) != std::end(work_days)) {
            if (product == "banana") {
                std::cout << std::fixed << quantity * 2.50 << std::endl;
            }
            else if (product == "apple") {
                std::cout << std::fixed << quantity * 1.20 << std::endl;
            }
            else if (product == "orange") {
                std::cout << std::fixed << quantity * 0.85 << std::endl;
            }
            else if (product == "grapefruit") {
                std::cout << std::fixed << quantity * 1.45 << std::endl;
            }
            else if (product == "kiwi") {
                std::cout << std::fixed << quantity * 2.70 << std::endl;
            }
            else if (product == "pineapple") {
                std::cout << std::fixed << quantity * 5.50 << std::endl;
            }
            else if (product == "grapes") {
                std::cout << std::fixed << quantity * 3.85 << std::endl;
            }
        }
        else if (std::find(std::begin(weekend), std::end(weekend), day) != std::end(weekend)) {
            if (product == "banana") {
                std::cout << std::fixed << quantity * 2.70 << std::endl;
            }
            else if (product == "apple") {
                std::cout << std::fixed << quantity * 1.25 << std::endl;
            }
            else if (product == "orange") {
                std::cout << std::fixed << quantity * 0.90 << std::endl;
            }
            else if (product == "grapefruit") {
                std::cout << std::fixed << quantity * 1.60 << std::endl;
            }
            else if (product == "kiwi") {
                std::cout << std::fixed << quantity * 3.00 << std::endl;
            }
            else if (product == "pineapple") {
                std::cout << std::fixed << quantity * 5.60 << std::endl;
            }
            else if (product == "grapes") {
                std::cout << std::fixed << quantity * 4.20 << std::endl;
            }
        }
        else {
            std::cout << "error" << std::endl;
        }
    }
    else {
        std::cout << "error" << std::endl;
    }

    return 0;
}