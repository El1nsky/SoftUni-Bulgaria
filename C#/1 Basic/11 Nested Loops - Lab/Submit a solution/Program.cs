using System;

namespace _03._Combinations
{
    public class Program
    {
        static void Main(string[] args)
        {
            short n = Convert.ToInt16(Console.ReadLine());

            short count = 0;

            for (short x1 = 0; x1 <= n; x1++)
            {
                for (short x2 = 0; x2 <= n; x2++)
                {
                    for (short x3 = 0; x3 <= n; x3++)
                    {
                        if (x1 + x2 + x3 == n)
                        {
                            count++;
                        }
                    }
                }
            }

            Console.WriteLine(count);
        }
    }
}