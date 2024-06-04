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

using namespace std;

int main() 
{
	// Read the input text
	string text; getline(cin >> ws, text);

	// Calculate the sum of digits in the text
	int sum = 0;

	for (char c : text)
	{
		if (isdigit(c))
			sum += c - '0';
	}

	// Determine the secret value
	char secretValue;

	if (isalpha(sum))
		secretValue = toupper(sum);
	else
		secretValue = static_cast<char>(sum);

	// Print the secret value or its number
	if (isalpha(secretValue))
		cout << "Secret value: " << secretValue;
	else
		cout << "Secret value: " << static_cast<int>(secretValue);

	return 0;
}