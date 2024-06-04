#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cmath>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <list>
#include <map>
#include <climits> 
#include <stdlib.h>

using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	string studentN; getline(cin >> ws, studentN);
	short age; cin >> age;
	float avrgGrade; cin >> avrgGrade;

	cout << "Name: " << studentN << ',' << " Age: " << age << ',' << " Grade: " << avrgGrade;

	return 0;
}