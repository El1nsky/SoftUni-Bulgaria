using System;

namespace _03._Pashorting_Eggs
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.Write("Egg size:");
            string eggSize = Console.ReadLine();

            //Console.Write("Egg color: ");
            string eggColor = Console.ReadLine();

            //Console.Write("Batches amount: ");
            short batchesAmount = short.Parse(Console.ReadLine());

            float[][] eggPrices = 
            {
                new float[] { 16, 13, 9 },  // Red
                new float[] { 12, 9, 8 },   // Green
                new float[] { 9, 7, 5 }     // Yellow
            };

            float discount = 0.35F;
            short sizeIndex, colorIndex;

            switch (eggSize)
            {
                case "Large":
                    sizeIndex = 0;
                    break;
                case "Medium":
                    sizeIndex = 1;
                    break;
                case "Small":
                    sizeIndex = 2;
                    break;
                default:
                    Console.WriteLine("Invalid egg size.");
                    return;
            }

            switch (eggColor)
            {
                case "Red":
                    colorIndex = 0;
                    break;
                case "Green":
                    colorIndex = 1;
                    break;
                case "Yellow":
                    colorIndex = 2;
                    break;
                default:
                    Console.WriteLine("Invalid egg color.");
                    return;
            }

            float result = (batchesAmount * eggPrices[colorIndex][sizeIndex]) - (batchesAmount * eggPrices[colorIndex][sizeIndex] * discount);

            Console.WriteLine($"{result:F2} leva.");

            //Console.ReadLine();
        }
    }
}
