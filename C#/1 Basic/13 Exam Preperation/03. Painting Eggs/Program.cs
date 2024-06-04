using System;

namespace _03._Painting_Eggs
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
            short batchesAmount = Convert.ToInt16(Console.ReadLine());

            float[] redEgg = {16,   // 0 Large         
                              13,   // 1 Medium
                              9};   // 2 Small

            float[] greenEgg = {12,  // 0 Large 
                                 9,  // 1 Medium
                                8};  // 2 Small

            float[] yellowEgg = {9,  // 0 Large 
                                 7,  // 1 Medium
                                5};  // 2 Small

            switch (eggSize)
            {
                case "Large":
                    if (eggColor == "Red") 
                    {
                        float result = (batchesAmount * redEgg[0]) - (batchesAmount * redEgg[0] * 0.35F);
                        Console.Write($"{result:F2} leva.");
                    }
                    else if (eggColor == "Green") 
                    {
                        float result = (batchesAmount * greenEgg[0]) - (batchesAmount * greenEgg[0] * 0.35F);
                        Console.Write($"{result:F2} leva.");
                    }
                    else
                    {
                        float result = (batchesAmount * yellowEgg[0]) - (batchesAmount * yellowEgg[0] * 0.35F);
                        Console.Write($"{result:F2} leva.");
                    }
                    break;
                case "Medium":
                    if (eggColor == "Red")
                    {
                        float result = (batchesAmount * redEgg[1]) - (batchesAmount * redEgg[1] * 0.35F);
                        Console.Write($"{result:F2} leva.");
                    }
                    else if (eggColor == "Green")
                    {
                        float result = (batchesAmount * greenEgg[1]) - (batchesAmount * greenEgg[1] * 0.35F);
                        Console.Write($"{result:F2} leva.");
                    }
                    else
                    {
                        float result = (batchesAmount * yellowEgg[1]) - (batchesAmount * yellowEgg[1] * 0.35F);
                        Console.Write($"{result:F2} leva.");
                    }
                    break;
                case "Small":
                    if (eggColor == "Red")
                    {
                        float result = (batchesAmount * redEgg[2]) - (batchesAmount * redEgg[2] * 0.35F);
                        Console.Write($"{result:F2} leva.");
                    }
                    else if (eggColor == "Green")
                    {
                        float result = (batchesAmount * greenEgg[2]) - (batchesAmount * greenEgg[2] * 0.35F);
                        Console.Write($"{result:F2} leva.");
                    }
                    else
                    {
                        float result = (batchesAmount * yellowEgg[2]) - (batchesAmount * yellowEgg[2] * 0.35F);
                        Console.Write($"{result:F2} leva.");
                    }
                    break;
            }
            
            //Console.ReadKey();
        }
    }
}

