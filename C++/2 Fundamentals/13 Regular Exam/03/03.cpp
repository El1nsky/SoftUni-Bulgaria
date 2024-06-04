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

int main()
{
	short i, wagonPos, newWagonPos;

	std::string wagonContent, operation, temp;

	std::vector<std::string> trainComp;
	std::vector<short> wagons;

	wagonPos = 0;
	newWagonPos = 0;

	while (wagonContent != "end")
	{
		std::getline(std::cin >> std::ws, wagonContent);
		if (wagonContent != "end") {
			// If the wagon is empty, store an identifiable string (e.g., "empty") directly.
			trainComp.push_back(wagonContent == "empty" ? " " : wagonContent);
		}
	}

	while (operation[0] != 'E')
	{
		std::getline(std::cin >> std::ws, operation);

		if (operation.length() == 5)
		{
			temp = operation[2]; wagonPos = std::stoi(temp) - 1;
			temp = operation[4]; newWagonPos = std::stoi(temp) - 1;
		}
		else if (operation.length() == 3)
		{
			temp = operation[2]; wagonPos = std::stoi(temp) - 1;
		}

		switch (operation[0])
		{
		case 'P':
			std::cout << '|';
			for (i = 0; i < trainComp.size(); i++)
			{
				std::cout << trainComp[i] << '|';
			}
			std::cout << '\n';
			break;
		case 'M':
			temp = trainComp[wagonPos];
			trainComp.erase(trainComp.begin() + wagonPos);
			if (wagonPos < newWagonPos)
				newWagonPos--;
			trainComp.insert(trainComp.begin() + newWagonPos, temp);

			std::cout << '|';
			for (i = 0; i < trainComp.size(); i++) {
				std::cout << trainComp[i] << '|';
			}
			std::cout << '\n';
			break;
		case 'L':
			trainComp.erase(trainComp.begin() + wagonPos);

			std::cout << '|';
			for (i = 0; i < trainComp.size(); i++)
			{
				std::cout << trainComp[i] << '|';
			}
			std::cout << '\n';
			break;
		case 'E': break;
		}
	}

	return 0;
}