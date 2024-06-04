using System;

namespace Invalid_Number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Int16 number = Convert.ToInt16(Console.ReadLine());

            if (number == 0)
            {
                Console.WriteLine();
            }
            else if (number >= 100 & number <= 200)
            {
                Console.WriteLine();
            }

            else
            {
                Console.WriteLine("invalid");
            }
        }
    }
}