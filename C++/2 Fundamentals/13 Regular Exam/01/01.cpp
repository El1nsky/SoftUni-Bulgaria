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
	short N, vowelCnt, nonVowelCnt, i;
	char ch, lowercaseCh;

	cin >> N; cin.ignore();

	vowelCnt = 0;
	nonVowelCnt = 0;

	for (i = 0; i < N; ++i)
	{
		cin >> ch;

		if (isalpha(ch)) 
		{
			lowercaseCh = tolower(ch);

			if (lowercaseCh == 'a' ||
				lowercaseCh == 'e' ||
				lowercaseCh == 'i' ||
				lowercaseCh == 'o' ||
				lowercaseCh == 'u' ||
				lowercaseCh == 'y')
				++vowelCnt;

			else
				++nonVowelCnt;
		}
	}

	std::cout << vowelCnt << ' ' << nonVowelCnt;

	return 0;
}