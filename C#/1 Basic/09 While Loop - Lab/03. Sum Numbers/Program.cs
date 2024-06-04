using System;
using System.Linq;

namespace _03._Sum_Numbers
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int target = Convert.ToInt32(Console.ReadLine());
            int sum = 0;
            int count = 0;

            while (sum < target)
            {
                int number = Convert.ToInt32(Console.ReadLine());

                sum += number;
                count++;
            }

            Console.WriteLine(sum);
        }
    }
}