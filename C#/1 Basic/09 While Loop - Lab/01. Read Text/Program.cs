using System;

namespace _01._Read_Text
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input;

            while (true)
            {
                input = Console.ReadLine();
                if (input.ToLower() == "stop")
                    break;

                Console.WriteLine(input);
            }
        }
    }
}