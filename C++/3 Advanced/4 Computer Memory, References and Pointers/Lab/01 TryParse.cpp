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
#include <unordered_map>
#include <stack>
#include <queue>
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

void ReadInput(std::string &string);

int main()
 {
  std::string str1, str2;
  std::cin >> str1 >> str2;

  int num1, num2;
  std::stringstream ss1(str1), ss2(str2);

  if (ss1 >> num1 && ss2 >> num2)
    std::cout << num1 + num2 << '\n';
  else if (!ss1 >> num1 && ss2 >> num2)
    std::cout << "[error] " << str1 << ' ' << '\n' << str2 << '\n';
  else
    std::cout << "[error] " << str2 << ' ' << '\n' << str1 << '\n';

  return 0;
}
    
void ReadInput(std::string &string)
{   
    std::getline(std::cin >> std::ws, string);
}