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


class SoftUni
{
public:
	auto Parse()
	{

		unsigned short i;

		std::vector<std::string> vec;
		std::string input;

		std::getline(std::cin >> std::ws, input);

		std::istringstream buffer(input);

		for (i = 0; i < input.size(); i++)
		{

		}


	}

};

using namespace std;

class Train {
private:
    vector<string> wagons;

public:
    void readInitialComposition() {
        string line;
        while (getline(cin, line) && line != "end") {
            wagons.push_back(line == "empty" ? "" : line);
        }
    }

    void processCommands() {
        string command;
        while (getline(cin, command) && command != "E") {
            if (command == "P") {
                printTrain();
            }
            else if (command[0] == 'M') {
                moveWagon(command);
            }
            else if (command[0] == 'L') {
                leaveWagon(command);
            }
        }
    }

private:
    void printTrain() {
        cout << "|";
        for (const auto& wagon : wagons) {
            cout << (wagon.empty() ? "empty" : wagon) << "|";
        }
        cout << "\n";
    }

    void moveWagon(const string& command) {
        istringstream iss(command);
        char cmd;
        int oldPos, newPos;
        iss >> cmd >> oldPos >> newPos;
        if (oldPos < 0 || oldPos >= wagons.size() || newPos < 0 || newPos >= wagons.size()) {
            return;
        }
        string wagon = wagons[oldPos];
        wagons.erase(wagons.begin() + oldPos);
        wagons.insert(wagons.begin() + newPos, wagon);
    }

    void leaveWagon(const string& command) {
        istringstream iss(command);
        char cmd;
        int pos;
        iss >> cmd >> pos;
        if (pos < 0 || pos >= wagons.size()) {
            return;
        }
        wagons.erase(wagons.begin() + pos);
    }
};

int main() {
    Train train;
    train.readInitialComposition();
    train.processCommands();
    return 0;
}