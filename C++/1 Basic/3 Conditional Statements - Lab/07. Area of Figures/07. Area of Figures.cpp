#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::ws;
using std::fixed;
using std::setprecision;
using std::string;

int main()
{
    string geoFigures;
    cin >> geoFigures;

    if (geoFigures == "square") 
    {
        float squareSide;
        cin >> squareSide;

        cout << fixed << setprecision(3) << squareSide * squareSide;
    }
    else if (geoFigures == "rectangle") 
    {
        float sideA, sideB;
        cin >> sideA >> sideB;

        cout << fixed << setprecision(3) << sideA * sideB;
    }
    else if (geoFigures == "circle") 
    {
        float radius;
        cin >> radius;

        float area = M_PI * radius * radius;
        cout << fixed << setprecision(3) << area;
    }
    else if (geoFigures == "triangle") {

        float a, b;
        cin >> a >> b;

        float area = (a * b) / 2;
        cout << fixed << setprecision(3) << area;
    }

    return 0;
}