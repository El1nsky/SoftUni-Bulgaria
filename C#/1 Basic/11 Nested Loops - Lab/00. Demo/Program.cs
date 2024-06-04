using System;
using System.Reflection.Metadata.Ecma335;

namespace _00._Demo_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input;
            short budgedNeeded = 0;
            int savings = 0;

            

            while (true) 
            {
                Console.Write("Enter destination name: ");
                input = Console.ReadLine();
                if (input == "End") { break; }  

                Console.Write("\nEnter needed budged for destination: ");
                budgedNeeded = Convert.ToInt16(Console.ReadLine());

                while (true)
                {
                    Console.Write("\nEnter savings: ");
                    savings += Convert.ToInt32(Console.ReadLine());

                    if (savings >= budgedNeeded)
                    {
                        Console.Write($"\nGoing to {input}!");

                        if (savings >= budgedNeeded) { savings = 0; }
                        break;
                    }
                }
            }       
        }
    }
}