using System;

namespace _01._Number_Pyramid
{
    internal class Program
    {
        static void Main(string[] args)
        {
            short n = Convert.ToInt16(Console.ReadLine());

            short current = 1;
            bool isBigger = false;

            for (short rows = 1; rows <= n; rows++)
            {
                for (short cols = 1; cols <= rows; cols++)
                {
                    if (current > n)
                    {
                        isBigger = true;
                        break;
                    }
                    Console.Write(current + " ");
                    current++;
                }
                if (isBigger) { break; }
                Console.WriteLine();
            }
        }
    }
}