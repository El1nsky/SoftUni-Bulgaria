#include <algorithm>
#include <array>
#include <cctype>
#include <chrono>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <ctime>
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
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool magicChar(char c)
 {
	return
		c == 'a' ||
		c == 'e' ||
		c == 'i' ||
		c == 'o' ||
		c == 'u';

	return false;
}

int main(void)
 {
	string input;
	getline(cin, input);

	ostringstream output;

	short i;
	char previous, current = 0;

	for (i = 0; i < input.size(); i++)
	 {
		current = input[i];
		if (magicChar(tolower(current)))
		 {
			previous = current;
			output << current;
		}
		else
			if (previous != current)
			 {
				previous = current;
				output << current;
			}
	}

	cout << output.str();

	return 0;
}