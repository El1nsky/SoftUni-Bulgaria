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
#include <chrono>
#include <list>
#include <map>
#include <climits> 
#include <stdlib.h>

using namespace std;

class DigitsConverter
{
public:
	short n;
	unsigned short temp = 0;

	string print;

	string digits()
	{	//Съхранява повечето цифри в текст.
		switch (temp)
		{
		case 1: return "one";
		case 2: return "two";
		case 3: return "three";
		case 4: return "four";
		case 5: return "five";
		case 6: return "six";
		case 7: return "seven";
		case 8: return "eight";
		case 9: return "nine";
		case 10: return "ten";
		case 11: return "eleven";
		case 12: return "twelve";
		case 13: return "thirteen";
		case 14: return "fourteen";
		case 15: return "fifteen";
		case 16: return "sixteen";
		case 17: return "seventeen";
		case 18: return "eighteen";
		case 19: return "nineteen";
		case 20: return "twenty";
		case 30: return "thirty";
		case 40: return "fourty";
		case 50: return "fifty";
		case 60: return "sixty";
		case 70: return "seventy";
		case 80: return "eighty";
		case 90: return "ninety";
		default: return "";
		}
	}
	string printToEnglish()
	{	//Извършва всички действия на програмата.
		//cin >> n;
		temp = n;

		if (temp == 0) print += "zero";
		else if (temp <= 20) print += digits();
		else if (n > 20 && n < 100) twoDigitConvert();
		else if (temp >= 100 && temp < 1000) threeDigitConvert();
		else if (temp >= 1000 && temp < 10000) fourDigitConvert();
		return print;
	}
	string twoDigitConvert()
	{	//Превръща двуцифрени числа в текст.
		temp /= 10;
		temp *= 10;
		print += digits();
		temp = n;
		temp %= 10;
		if (temp == 0) return print;
		else print += " "; print += digits(); return print;
	}
	string threeDigitConvert()
	{	// Превръща трицифрени числа в текст.
		temp /= 100;
		print += digits(); print += " "; print += "hundred";
		if (temp * 100 == n) return print;
		temp = n;
		temp %= 100;

		if (temp <= 20) { print += " "; print += digits(); return print; }
		else
		{
			if (temp % 10 == 0)
			{
				print += " "; print += digits(); return print;
			}
			else
			{
				print += " ";
				temp /= 10;
				temp *= 10;
				print += digits(); print += " ";
				temp = n;
				temp %= 100;
				temp %= 10;
				print += digits(); return print;
			}
		}
	}
	string fourDigitConvert()
	{	//Превръща четирицифрени  числа в текст.
		temp /= 1000;
		print += digits(); print += " "; print += "thousand";
		if (temp * 1000 == n) return print;
		temp = n;
		temp %= 1000;
		if (temp <= 20)
		{
			print += " "; print += digits(); return print;
		}
		else if (temp > 20 && temp < 100)
		{
			print += " ";
			if (temp % 10 == 0)
			{
				print += digits(); return print;
			}
			else
			{
				temp /= 10;
				temp *= 10;
				print += digits(); print += " ";
				temp = n;
				temp %= 10;
				print += digits(); return print;
			}
		}
		else if (temp >= 100 && temp < 1000)
		{
			print += " ";
			temp /= 100;
			print += digits();
			print += " "; print += "hundred";
			temp = n;
			if ((temp / 100) * 100 == n) return print;
			temp %= 100;
			if (temp > 20 && temp < 100)
			{
				print += " ";
				if (temp % 10 == 0)
				{
					print += digits(); return print;
				}
				else
				{
					temp /= 10;
					temp *= 10;
					print += digits(); print += " ";
					temp = n;
					temp %= 10;
					print += digits(); return print;
				}
			}
			else if (temp <= 20) print += " "; print += digits(); return print;
		}
	}
	void  printEverything()
	{
		//Изписва абсолютно всички възможни резултати в конзолата.
		for (n = 9999; n >= 0; n--)
		{
			cout << n << ' ' << printToEnglish() << '\n';
			print = "";
		}
	}
	void saveEverythingToTxt()
	{
		//Записва абсолютно всички възможни резултати на.txt файл.
		ofstream data("print.txt");
		for (n = 0; n <= 9999; n++)
		{
			data << n << ' ' << printToEnglish() << '\n';
			print = "";
		}
		data.close();
	}
};

int main()
{
	auto start = chrono::high_resolution_clock::now();
	DigitsConverter D;

	//cout << D.printToEnglish();

	// Този метод изписва абсолютно всички възможни резултати в конзолата.
	// За да работи, трябва на ред 30 да се премахне или коментира "cin >> n;"
	D.printEverything();
	
	// Този метод записва абсолютно всички възможни резултати на .txt файл.
	// За да работи, трябва на ред 30 да се премахне или коментира "cin >> n;"
	//D.saveEverythingToTxt();
	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
	cout << "\nExecution time: " << duration.count() << " milliseconds" << endl;
	return 0;
}

