using System;
using System.Net.Http.Headers;

namespace _02._Multiplication_Table
{
    internal class Program
    {
        static void Main(string[] args)
        {
            for (short x = 1; x <= 10; x++)
            {
                for (short y = 1; y <= 10; y++)
                {
                    int result = x * y;
                    Console.WriteLine($"{x} * {y} = {result}");
                }
            }
        }
    }
}