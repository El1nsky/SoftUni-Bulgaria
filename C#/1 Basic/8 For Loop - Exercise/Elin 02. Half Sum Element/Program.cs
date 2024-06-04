using System;
using System.Linq;

namespace _02._Half_Sum_Element
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Insert how many numbers you want to add");
            Int16 n = Convert.ToInt16(Console.ReadLine());
            double[] numbers = new double[n];
            double sum = 0;
            double maxNumber = 0;

            for (Int16 i = 0; i < n; i++)
            {
                numbers[i] = Convert.ToDouble(Console.ReadLine());
                sum += numbers[i];
                maxNumber = numbers.Max();
            }

            double otherNumbers = sum - maxNumber;

            if (sum - maxNumber == maxNumber)
            {
                Console.WriteLine($"Yes\nSum = {sum - maxNumber}");
            }
            else
            {
                Console.WriteLine($"No\nDiff = {Math.Abs(maxNumber - otherNumbers)}");
            }

            Console.ReadKey();
        }
    }
}