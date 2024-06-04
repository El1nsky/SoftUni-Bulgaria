using System;
using System.Runtime;
using System.Transactions;

namespace _00._Demo
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Amount of tournaments participated: ");
            short tournaments = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Starting startingPoints in the ranklist");
            short startingPoints = Convert.ToInt16(Console.ReadLine());

            short totalPoints = startingPoints;
            short tournamentWins = 0;

            for (int i = 1; i <= tournaments; i++)
            {
                Console.WriteLine($"Enter amount of tournament phases:\nPhase # {i}");
                string tournamentPhase = Console.ReadLine();

                switch (tournamentPhase)
                {
                    case "W":
                        totalPoints += 2000;
                        tournamentWins++;
                        break;
                    case "F":
                        totalPoints += 1200;
                        break;
                    case "SF":
                        totalPoints += 720;
                        break;
                }
            }

            Console.WriteLine($"Final startingPoints: {totalPoints}");
            Console.WriteLine($"Average startingPoints : {(totalPoints - startingPoints) / tournaments}");
            Console.WriteLine($"{(double)tournamentWins / tournaments * 100:F2}%");

            Console.ReadKey();
        }
    }
}