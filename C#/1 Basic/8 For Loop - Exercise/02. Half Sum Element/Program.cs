using System;
using System.Linq;

namespace _02._Half_Sum_Element
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

            bool found = false;
            for (int i = 0; i < n; i++)
            {
                int current_number = numbers[i];
                int sum_of_others = numbers.Sum() - current_number;
                if (current_number == sum_of_others)
                {
                    Console.WriteLine("Yes");
                    Console.WriteLine("Sum = " + current_number);
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                int max_number = numbers.Max();
                int sum_of_others = numbers.Sum() - max_number;
                Console.WriteLine("No");
                Console.WriteLine("Diff = " + Math.Abs(max_number - sum_of_others));
            }
        }
    }
}