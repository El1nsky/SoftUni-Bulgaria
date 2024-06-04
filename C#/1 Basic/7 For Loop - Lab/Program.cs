using System;

namespace _00_Demo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Int16 n = Convert.ToInt16(Console.ReadLine());
            Double[] num = new Double[n];

            Double sum_1 = 0;
            Double sum_2 = 0;

            for (int i = 0; i < n; i++)
            {
                sum_1 += num[i] = Convert.ToDouble(Console.ReadLine());
            }

            for (int i = 0; i < n; i++)
            {
                sum_2 += num[i] = Convert.ToDouble(Console.ReadLine());
            }

            if (sum_1 == sum_2)
            {
                Console.WriteLine($"Yes, sum = {sum_1:F2}");
            }
            else
            {
                Console.WriteLine($"No, diff = {Math.Abs(sum_1 - sum_2):F2}");
            }
        }
    }
}

