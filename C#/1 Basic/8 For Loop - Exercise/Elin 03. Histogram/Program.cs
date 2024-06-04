using System;
using System.Linq;
using System.Security.Cryptography;

namespace _03._Histogram
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Enter how many numbers to input: ");
            short n = Convert.ToInt16(Console.ReadLine());
            short[] numbers = new short[n];

            short p1 = 0;
            short p2 = 0;
            short p3 = 0;
            short p4 = 0;
            short p5 = 0;

            for (short i = 0; i < n; i++)
            {
                numbers[i] = Convert.ToInt16(Console.ReadLine());

                if (numbers[i] < 200)
                {
                    p1++;
                }
                else if (numbers[i] >= 200 & numbers[i] <= 399)
                {
                    p2++;
                }
                else if (numbers[i] >= 400 & numbers[i] <= 599)
                {
                    p3++;
                }
                else if (numbers[i] >= 600 & numbers[i] <= 799)
                {
                    p4++;
                }
                else if (numbers[i] >= 800)
                {
                    p5++;
                }
            }

            Console.WriteLine($"{(double)p1 / n * 100:F2}%");
            Console.WriteLine($"{(double)p2 / n * 100:F2}%");
            Console.WriteLine($"{(double)p3 / n * 100:F2}%");
            Console.WriteLine($"{(double)p4 / n * 100:F2}%");
            Console.WriteLine($"{(double)p5 / n * 100:F2}%");

            Console.ReadKey();
        }
    }
}