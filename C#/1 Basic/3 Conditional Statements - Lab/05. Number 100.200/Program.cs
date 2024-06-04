using System;

namespace Number_100_to_200
{
    class Program
    {
        static void Main(string[] args)
        {
            int number = Convert.ToInt32(Console.ReadLine());

            if (number < 100)
            {
                Console.WriteLine("Less than 100");
            }
            if (number >= 100 & number <= 200)
            {
                Console.WriteLine("Between 100 and 200");
            }
            if (number > 200)
            {
                Console.WriteLine("Greater than 200");
            }
        }
    }
}