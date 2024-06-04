#include <iostream>
using namespace std;

//const int maxSize = 99; // (1) <<<<<< със това НЕРАБОТИ В Judg а компилатора си компилира правилно

int main()
{
	//int arr[maxSize]; // (1) <<<<< със това НЕРАБОТИ В Judg а компилатора си компилира правилно

	int size;
	cin >> size;

	int arr[size]; // (2) <<<<<<< СЪС ТОВА МИНАВА Judg , а компиулатора подчертаза [size] ?!

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int evenSum = 0;
	int oddSum = 0;

	for (int number : arr) {
		if (number % 2 == 0) {
			evenSum += number;
		}
		else {
			oddSum += number;
		}
	}

	cout << evenSum - oddSum << flush;

	return 0;
}