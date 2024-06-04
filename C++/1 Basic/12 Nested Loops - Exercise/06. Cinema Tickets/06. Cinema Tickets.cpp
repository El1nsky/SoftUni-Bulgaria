#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <map>
#include <numeric>
#include <climits> 

using namespace std;

int main()
{
    string command;
    int totalTickets = 0;
    int totalStudentTickets = 0;
    int totalStandardTickets = 0;
    int totalKidTickets = 0;
    int totalSeats = 0;

    while (true)
    {
        getline(cin, command);

        if (command == "Finish")
        {
            break;
        }

        string filmName = command;
        int availableSeats;
        cin >> availableSeats;
        cin.ignore(); // Consume the newline character.

        totalSeats += availableSeats;

        int studentTickets = 0;
        int standardTickets = 0;
        int kidTickets = 0;

        while (true)
        {
            getline(cin, command);

            if (command == "student")
            {
                studentTickets++;
            }
            else if (command == "standard")
            {
                standardTickets++;
            }
            else if (command == "kid")
            {
                kidTickets++;
            }
            else if (command == "End")
            {
                break;
            }

            if (studentTickets + standardTickets + kidTickets == availableSeats)
            {
                break;
            }
        }

        int filmTickets = studentTickets + standardTickets + kidTickets;
        double filmOccupancyPercentage = (filmTickets / static_cast<double>(availableSeats)) * 100;

        cout << filmName << " - " << fixed << setprecision(2) << filmOccupancyPercentage << "% full." << endl;

        totalTickets += filmTickets;
        totalStudentTickets += studentTickets;
        totalStandardTickets += standardTickets;
        totalKidTickets += kidTickets;
    }

    double studentTicketsPercentage = (totalStudentTickets / static_cast<double>(totalTickets)) * 100;
    double standardTicketsPercentage = (totalStandardTickets / static_cast<double>(totalTickets)) * 100;
    double kidTicketsPercentage = (totalKidTickets / static_cast<double>(totalTickets)) * 100;
    double hallOccupancyPercentage = (totalTickets / static_cast<double>(totalSeats)) * 100;

    cout << "Total tickets: " << totalTickets << endl;
    cout << fixed << setprecision(2) << studentTicketsPercentage << "% student tickets." << endl;
    cout << fixed << setprecision(2) << standardTicketsPercentage << "% standard tickets." << endl;
    cout << fixed << setprecision(2) << kidTicketsPercentage << "% kids tickets." << endl;

    return 0;
}