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

void readVector(istream& istr, vector<int>& output)
{
	int buf;
	while (istr >> buf)
		output.push_back(buf);
}

void readVector(const string& buffer, vector<int>& output)
{
	istringstream istr(buffer);
	readVector(istr, output);
}

void readPipe(istream& istr, vector<int>& pipe)
{
	string pipeStr; getline(istr, pipeStr);
	readVector(pipeStr, pipe);
}

int main()
{
	vector<int> installation, checkup;

	long int pipes, decay, i; cin >> pipes; cin.ignore();

	installation.reserve(pipes);
	checkup.reserve(pipes);

	readPipe(cin, checkup);
	readPipe(cin, installation);

	for (i = 0; i < pipes; i++)
	{
		decay = installation[i] - checkup[i];

		cout << installation[i] / decay << ' ';
	}

	return 0;
}