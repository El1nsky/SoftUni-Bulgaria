using System;

namespace Number_in_Range
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Int16 number = Convert.ToInt16(Console.ReadLine());

            if (number >= -100 && number <= 100 && number != 0)
            {
                Console.WriteLine("Yes");
            }

            else
            {
                Console.WriteLine("No");
            }
        }
    }
}