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

void readList(istream& istr, list<unsigned int>& output)
{
	unsigned int buff;

	while (istr >> buff)
		output.push_back(buff);
}

void readList(const string& buffer, list<unsigned int>& output)
{
	istringstream istr(buffer);
	readList(istr, output);
}

void readTrain(istream& istr, list<unsigned int>& train)
{
	string trainStr; getline(istr, trainStr);
	readList(trainStr, train);
}

void mergeFrom(list<unsigned int>& finalTrain, list <unsigned int>::iterator& it, string& mergeRes, char train)
{
	mergeRes.insert(mergeRes.begin(), train);
	finalTrain.push_back(*it);
	it++;
}

int main()
{
	list <unsigned int> trainA, trainB, finalTrain;

	readTrain(cin, trainA);
	readTrain(cin, trainB);

	string mergeRes;

	list<unsigned int>::iterator itA = trainA.begin();
	list<unsigned int>::iterator itB = trainB.begin();

	while (itA != trainA.end() || itB != trainB.end())
	{
		if (itA == trainA.end())
			mergeFrom(finalTrain, itB, mergeRes, 'B');
		else if (itB == trainB.end())
			mergeFrom(finalTrain, itA, mergeRes, 'A');
		else
		{
			if (*itA > *itB)
				mergeFrom(finalTrain, itA, mergeRes, 'A');
			else
				mergeFrom(finalTrain, itB, mergeRes, 'B');
		}
	}

	cout << mergeRes << '\n';

	for (unsigned int c : finalTrain)
		cout << c << ' ';

	return 0;
}