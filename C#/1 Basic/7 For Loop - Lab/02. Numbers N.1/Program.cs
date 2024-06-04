using System;

namespace _02._Numbers_N._1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Int16 number = Convert.ToInt16(Console.ReadLine());

            for (Int16 i = number; i >= 1; i--)
            {
                Console.WriteLine(i);
            }
        }
    }
}