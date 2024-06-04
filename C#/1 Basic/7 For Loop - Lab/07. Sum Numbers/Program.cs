using System;

namespace _07._Sum_Numbers
{
    internal class Program
    {
        static void Main()
        {
            Int16 n = Convert.ToInt16(Console.ReadLine());
            Decimal[] num = new Decimal[n];
            Decimal sum = 0;

            for (Int16 i = 0; i < n; i++)
            {
                num[i] = Convert.ToDecimal(Console.ReadLine());
                sum += num[i];
            }

            Console.WriteLine($"{sum}");
        }  
    }
}
