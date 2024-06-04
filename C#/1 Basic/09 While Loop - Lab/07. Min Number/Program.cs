using System;

namespace _07._Min_Number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int smallestNumber = int.MaxValue;

            while (true)
            {
                string input = Console.ReadLine();

                if (input == "Stop")
                    break;

                int number;
                try
                {
                    number = Convert.ToInt32(input);
                }
                catch (FormatException)
                {
                    Console.WriteLine("");
                    continue;
                }

                if (number < smallestNumber)
                    smallestNumber = number;
            }

            Console.WriteLine(smallestNumber);
        }
    }
}