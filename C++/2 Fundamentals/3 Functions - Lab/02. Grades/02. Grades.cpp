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

//void grades();
//
//int main()
//{
//	grades();
//
//	return 0;
//}
//
//void grades()
//{
//	long double input;
//	string grade;
//
//	cin >> input;
//
//	if (input >= 2 && input <= 2.99) grade = "Fail";
//	else if (input >= 3 && input <= 3.49) grade = "Poor";
//	else if (input >= 3.50 && input <= 4.49) grade = "Good";
//	else if (input >= 4.50 && input <= 5.49) grade = "Very good";
//	else if (input >= 5.50 && input <= 6) grade = "Excellent";
//
//	cout << grade;
//}

class Test
{
public:
	void grades() 
	{
		long double input;
		string grade;

		cin >> input;

		if (input >= 2 && input <= 2.99) grade = "Fail";
		else if (input >= 3 && input <= 3.49) grade = "Poor";
		else if (input >= 3.50 && input <= 4.49) grade = "Good";
		else if (input >= 4.50 && input <= 5.49) grade = "Very good";
		else if (input >= 5.50 && input <= 6) grade = "Excellent";

		cout << grade;
	};
};

int main()
{
	Test grades;

	grades.grades();

	return 0;
}