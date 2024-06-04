using System;

namespace _06._Cake
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.Write("\nRead the dimensions of the cake: ");
            short width = Convert.ToInt16(Console.ReadLine());
            short length = Convert.ToInt16(Console.ReadLine());

            //Console.Write("\nCalculate the total number of cake pieces");
            int totalPieces = width * length;

            while (true)
            {
                //Console.Write("\nRead the number of pieces taken by each guest");
                string input = Console.ReadLine();

                if (input == "STOP") 
                {
                    Console.WriteLine($"{totalPieces} pieces are left.");
                    break;
                }

                int piecesToTake = Convert.ToInt32(input);

                if (piecesToTake > totalPieces) 
                {
                    Console.WriteLine($"No more cake left! You need {piecesToTake - totalPieces} pieces more.");
                    break;
                }
                totalPieces -= piecesToTake;
            }

            //Console.ReadKey();
        }
    }
}