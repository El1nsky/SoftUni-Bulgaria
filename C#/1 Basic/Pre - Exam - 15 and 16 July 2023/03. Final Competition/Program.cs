using System;

namespace _03._Final_Competition
{
    internal class Program
    {
        static void Main()
        {
            //Console.Write("Amount of dancers: ");
            short numberOfDancers = Convert.ToInt16(Console.ReadLine());

            //Console.Write("Amount of points: ");
            decimal points = Convert.ToDecimal(Console.ReadLine());

            //Console.Write("Season: ");
            string season = Console.ReadLine();

            //Console.Write("Holding place: ");
            string location = Console.ReadLine();

            decimal totalAmount = 0.00m;

            if (location == "Bulgaria")
            {
                totalAmount = numberOfDancers * points;
                if (season == "summer")
                {
                    totalAmount -= totalAmount * 0.05m;
                }
                else if (season == "winter")
                {
                    totalAmount -= totalAmount * 0.08m;
                }
            }
            else if (location == "Abroad")
            {
                totalAmount = (numberOfDancers * points) + ((numberOfDancers * points) * 0.5m);
                if (season == "summer")
                {
                    totalAmount -= totalAmount * 0.10m;
                }
                else if (season == "winter")
                {
                    totalAmount -= totalAmount * 0.15m;
                }
            }

            decimal charityAmount = totalAmount * 0.75m;
            decimal moneyPerDancer = (totalAmount - charityAmount) / numberOfDancers;

            Console.WriteLine($"Charity - {charityAmount:F2}");
            Console.WriteLine($"Money per dancer - {moneyPerDancer:F2}");

            //Console.ReadKey();
        }
    }
}