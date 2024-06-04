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

#define _USE_MATH_DEFINES

using namespace std;

//template <typename X, typename Y, typename Z>

int main() 
{
	vector<short> sequence1, sequence2, mergedSequence;
	short num;

	// Read the first sequence
	string input1, input2;
	getline(cin >> ws, input1);
	istringstream iss1(input1);

	while (iss1 >> num) sequence1.push_back(num);

	// Read the second sequence
	getline(cin >> ws, input2);
	istringstream iss2(input2);

	while (iss2 >> num) sequence2.push_back(num);

	// Merge the sequences

	unsigned short size1, size2, maxSize;

	size1 = sequence1.size();
	size2 = sequence2.size();
	maxSize = max(size1, size2);

	for (unsigned short i = 0; i < maxSize; ++i)
	{
		if (i < size1) mergedSequence.push_back(sequence1[i]);

		if (i < size2) mergedSequence.push_back(sequence2[i]);
	}

	// Print the merged sequence
	for (auto num : mergedSequence) cout << num << ' ';


	return 0;
}