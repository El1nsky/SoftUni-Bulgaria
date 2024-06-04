using System;

namespace _06._Cinema_Tickets
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string command;
            int totalTickets = 0;
            int totalStudentTickets = 0;
            int totalStandardTickets = 0;
            int totalKidTickets = 0;
            int totalSeats = 0;

            while ((command = Console.ReadLine()) != "Finish")
            {
                string filmName = command;
                int availableSeats = int.Parse(Console.ReadLine());
                totalSeats += availableSeats;

                int studentTickets = 0;
                int standardTickets = 0;
                int kidTickets = 0;

                while (true)
                {
                    string ticketType = Console.ReadLine();

                    if (ticketType == "student")
                    {
                        studentTickets++;
                    }
                    else if (ticketType == "standard")
                    {
                        standardTickets++;
                    }
                    else if (ticketType == "kid")
                    {
                        kidTickets++;
                    }
                    else if (ticketType == "End")
                    {
                        break;
                    }

                    if (studentTickets + standardTickets + kidTickets == availableSeats)
                    {
                        break;
                    }
                }

                int filmTickets = studentTickets + standardTickets + kidTickets;
                double filmOccupancyPercentage = (filmTickets / (double)availableSeats) * 100;

                Console.WriteLine($"{filmName} - {filmOccupancyPercentage:F2}% full.");

                totalTickets += filmTickets;
                totalStudentTickets += studentTickets;
                totalStandardTickets += standardTickets;
                totalKidTickets += kidTickets;
            }

            double studentTicketsPercentage = (totalStudentTickets / (double)totalTickets) * 100;
            double standardTicketsPercentage = (totalStandardTickets / (double)totalTickets) * 100;
            double kidTicketsPercentage = (totalKidTickets / (double)totalTickets) * 100;
            double hallOccupancyPercentage = (totalTickets / (double)totalSeats) * 100;

            Console.WriteLine($"Total tickets: {totalTickets}");
            Console.WriteLine($"{studentTicketsPercentage:F2}% student tickets.");
            Console.WriteLine($"{standardTicketsPercentage:F2}% standard tickets.");
            Console.WriteLine($"{kidTicketsPercentage:F2}% kids tickets.");
        }
    }
}