using System;

namespace _06._Building
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int floors = Convert.ToInt32(Console.ReadLine());
            int rooms = Convert.ToInt32(Console.ReadLine());

            for (int i = floors; i > 0; i--)
            {
                for (int j = 0; j < rooms; j++)
                {
                    if (i == floors)
                    {
                        Console.Write($"L{i}{j} ");
                    }
                    else if (i % 2 == 0)
                    {
                        Console.Write($"O{i}{j} ");
                    }
                    else
                    {
                        Console.Write($"A{i}{j} ");
                    }
                }
                Console.WriteLine();
            }
        }
    }
}