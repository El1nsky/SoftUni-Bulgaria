using System;

namespace _05._Traveling
{
    internal class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                //Console.Write("Enter destination: ");
                string destination = Console.ReadLine();

                if (destination.ToLower() == "end")
                    break;

                //Console.Write("Enter minimum budget: ");
                decimal minimumBudget = decimal.Parse(Console.ReadLine());

                decimal totalSavings = 0;

                while (totalSavings < minimumBudget)
                {
                    //Console.Write("Enter savings: ");
                    decimal savings = decimal.Parse(Console.ReadLine());

                    totalSavings += savings;
                }

                Console.WriteLine($"Going to {destination}!");
            }

            //Console.WriteLine("Program ended.");
        }
    }
}