using System;

namespace _05._Everest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            short startingPoint = 5364;
            short peak = 8848;
            short counter = 0;

            while (true)
            {
                //Console.Write("Sleep or continue climbing?: ");
                string choice = Console.ReadLine();

                if (choice != "END") { counter++; }

                if (choice == "END" || counter >= 5)
                {
                    Console.WriteLine($"Failed!\n{startingPoint}");
                    break;
                }

                //Console.Write("Kilometers climbed: ");
                short climbed = Convert.ToInt16(Console.ReadLine());

                startingPoint += climbed;

                if (startingPoint >= peak)
                {
                    Console.Write($"Goal reached for {counter} days!");
                    break;
                }

                //Console.ReadKey();
            }
        }
    }
}