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
	size_t i, j;

	string first, second, temp, temp2;

	vector<string> vec1, vec2;

	getline(cin >> ws, first);
	istringstream buffer(first);

	while (buffer >> temp)
		vec1.push_back(temp);

	getline(cin >> ws, second);
	istringstream buffer2(second);

	while (buffer2 >> temp2);
	vec2.push_back(temp2);

	for (i = 0; i < vec1.size(); i++)
	{
		for (j = 0; j < vec1[j].size(); j++)
		{

		}
	}

	return 0;
}

