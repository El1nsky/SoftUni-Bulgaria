using System;
using System.Linq;

class Program
{
    static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        int[] numbers = new int[2 * n];

        for (int i = 0; i < 2 * n; i++)
        {
            numbers[i] = Convert.ToInt32(Console.ReadLine());
        }

        int leftSum = numbers.Take(n).Sum();
        int rightSum = numbers.Skip(n).Take(n).Sum();

        if (leftSum == rightSum)
        {
            Console.WriteLine("Yes, sum = " + leftSum);
        }

        else
        {
            Console.WriteLine("No, diff = " + Math.Abs(leftSum - rightSum));
        }
    }
}