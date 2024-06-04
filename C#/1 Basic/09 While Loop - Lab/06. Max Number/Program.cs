using System;

namespace _06._Max_Number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int largestNumber = int.MinValue;

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

                if (number > largestNumber)
                    largestNumber = number;
            }

            Console.WriteLine(largestNumber);
        }
    }
}