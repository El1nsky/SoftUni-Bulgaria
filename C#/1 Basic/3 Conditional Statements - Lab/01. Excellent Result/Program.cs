using System;

namespace Excellent_Result
{
    class Program
    {
        static void Main(string[] args)
        {
            double grade = Convert.ToDouble(Console.ReadLine());
            if (grade >= 5.50)
            {
                Console.WriteLine("Excellent!");
            }
        }
    }
}