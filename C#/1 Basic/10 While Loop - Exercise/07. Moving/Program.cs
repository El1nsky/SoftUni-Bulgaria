using System;

namespace _07._Moving
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int width = Convert.ToInt32(Console.ReadLine());
            int length = Convert.ToInt32(Console.ReadLine());
            int height = Convert.ToInt32(Console.ReadLine());

            int totalVolume = width * length * height;

            string input;
            int totalBoxesVolume = 0;

            while ((input = Console.ReadLine()) != "Done")
            {
                int boxes = Convert.ToInt32(input);
                int boxesVolume = boxes * 1 * 1 * 1;
                totalBoxesVolume += boxesVolume;

                if (totalBoxesVolume >= totalVolume)
                {
                    int missingVolume = totalBoxesVolume - totalVolume;
                    Console.WriteLine($"No more free space! You need {missingVolume} Cubic meters more.");
                    return;
                }
            }

            int freeVolume = totalVolume - totalBoxesVolume;
            Console.WriteLine($"{freeVolume} Cubic meters left.");

            //Console.ReadKey();
        }
    }
}