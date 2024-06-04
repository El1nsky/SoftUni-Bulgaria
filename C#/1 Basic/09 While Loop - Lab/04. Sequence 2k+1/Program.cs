using System;

namespace _04._Sequence_2k_1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int n;

            try
            {
                n = Convert.ToInt32(input);
            }
            catch (FormatException)
            {
                Console.WriteLine("");
                return;
            }

            int number = 1;

            while (number <= n)
            {
                Console.WriteLine(number + " ");
                number = number * 2 + 1;
            }
        }
    }
}