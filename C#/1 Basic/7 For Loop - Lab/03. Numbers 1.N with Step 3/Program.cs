using System;

namespace _03._Numbers_1.N_with_Step_3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Int16 number = Convert.ToInt16(Console.ReadLine());

            for (Int16 i = 1; i <= number; i += 3)
            {
                Console.WriteLine(i);
            }
        }
    }
}