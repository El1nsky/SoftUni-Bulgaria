using System;

namespace Elin_07._Trekking_Mania
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter how many groups of hikers: ");
            short numbersOfGroups = Convert.ToInt16(Console.ReadLine());

            short[] hikersPerMountain = {0,  // 0 Musala
                                         0,  // 1 Blanc
                                         0,  // 2 Kalimanjaro
                                         0,  // 3 K2  
                                         0}; // 4 Everest

            for (short i = 1; i <= numbersOfGroups; i++)
            {
                Console.WriteLine($"Enter how many hikers in a group # {i}:");
                short groupSize = Convert.ToInt16(Console.ReadLine());

                if (groupSize <= 5)
                {
                    hikersPerMountain[0] += groupSize;
                }
                else if (groupSize >= 6 & groupSize <= 12)
                {
                    hikersPerMountain[1] += groupSize;
                }
                else if (groupSize >= 13 & groupSize <= 25)
                {
                    hikersPerMountain[2] += groupSize;
                }
                else if (groupSize >= 26 & groupSize <= 40)
                {
                    hikersPerMountain[3] += groupSize;
                }
                else if (groupSize >= 41)
                {
                    hikersPerMountain[4] += groupSize;
                }
            }

            int totalClimbers = hikersPerMountain[0] +  //Musala Climbers 
                                hikersPerMountain[1] +  //Blanc Climbers
                                hikersPerMountain[2] +  //Kalimanjaro Climbers
                                hikersPerMountain[3] +  //K2 Climbers
                                hikersPerMountain[4];   //Everest Climbers

            double MusalaPercentage = (hikersPerMountain[0] * 100.00) / totalClimbers;
            double BlancPercentage = (hikersPerMountain[1] * 100.00) / totalClimbers;
            double KalimanjaroPercentage = (hikersPerMountain[2] * 100.00) / totalClimbers;
            double K2Percentage = (hikersPerMountain[3] * 100.00) / totalClimbers;
            double EverestPercentage = (hikersPerMountain[4] * 100.00) / totalClimbers;

            Console.WriteLine($"{MusalaPercentage:F2}%");
            Console.WriteLine($"{BlancPercentage:F2}%");
            Console.WriteLine($"{KalimanjaroPercentage:F2}%");
            Console.WriteLine($"{K2Percentage:F2}%");
            Console.WriteLine($"{EverestPercentage:F2}%");

            Console.ReadKey();
        }
    }
}