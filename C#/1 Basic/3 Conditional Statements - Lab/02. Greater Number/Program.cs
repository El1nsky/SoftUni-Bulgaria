using System;

namespace Greater_Number
{
    class Program
    {
        static void Main(string[] args)
        {
            int num_1 = Convert.ToInt32(Console.ReadLine());
            int num_2 = Convert.ToInt32(Console.ReadLine());

            if (num_1 > num_2)
            {
                Console.WriteLine(num_1);
            }
            else
            {
                Console.WriteLine(num_2);
            }
        }
    }
}