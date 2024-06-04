#include <iostream>
#include <string>

int main() {
    const int goalSteps = 10000;
    int totalSteps = 0;

    while (totalSteps < goalSteps) {
        std::string input;
        std::cout << "Enter the number of steps (or 'Going home' to end): ";
        std::getline(std::cin, input);

        if (input == "Going home") {
            std::cout << "Enter the steps taken on the way home: ";
            int stepsOnWayHome;
            std::cin >> stepsOnWayHome;
            totalSteps += stepsOnWayHome;

            if (totalSteps < goalSteps) {
                int difference = goalSteps - totalSteps;
                std::cout << difference << " more steps to reach goal." << std::endl;
            }
            else {
                int difference = totalSteps - goalSteps;
                std::cout << "Goal reached! Good job!" << std::endl;
                if (difference > 0) {
                    std::cout << difference << " steps over the goal!" << std::endl;
                }
            }

            break;
        }

        int steps = std::stoi(input);
        totalSteps += steps;

        if (totalSteps >= goalSteps) {
            int difference = totalSteps - goalSteps;
            std::cout << "Goal reached! Good job!" << std::endl;
            if (difference > 0) {
                std::cout << difference << " steps over the goal!" << std::endl;
            }
            break;
        }
    }

    return 0;
}
