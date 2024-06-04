using System;

namespace _10._Odd_Even_Sum
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int[] numbers = new int[n];

            for (int i = 0; i < n; i++)
            {
                numbers[i] = Convert.ToInt32(Console.ReadLine());
            }

            int even_sum = 0;
            int odd_sum = 0;

            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    even_sum += numbers[i];
                }
                else
                {
                    odd_sum += numbers[i];
                }
            }

            if (even_sum == odd_sum)
            {
                Console.WriteLine("Yes");
                Console.WriteLine("Sum = " + even_sum);
            }

            else
            {
                Console.WriteLine("No");
                Console.WriteLine("Diff = " + Math.Abs(even_sum - odd_sum));
            }
        }
    }
}