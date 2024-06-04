using System;

namespace _01._Clock
{
    internal class Program
    {
        static void Main(string[] args)
        {
            for (short hour = 0; hour <= 23; hour++)
            {
                for (short minute = 0; minute <= 59; minute++)
                {
                    Console.WriteLine($"{hour}:{minute}");
                }
            }
        }
    }
}