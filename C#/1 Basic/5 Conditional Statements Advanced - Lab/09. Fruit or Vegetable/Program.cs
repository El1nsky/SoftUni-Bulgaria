using System;

namespace Fruit_or_Vegetable

{
    internal class Program
    {
        static void Main(string[] args)
        {
            String product = Console.ReadLine();
            String[] fruits = { "banana", "apple", "kiwi", "cherry", "lemon", "grapes" };
            String[] vegetables = { "tomato", "cucumber", "pepper", "carrot" };

            if (Array.IndexOf(fruits, product) >= 0)
            {
                Console.WriteLine("fruit");
            }
            else if (Array.IndexOf(vegetables, product) >= 0)
            {
                Console.WriteLine("vegetable");
            }
            else
            {
                Console.WriteLine("unknown");
            }
        }
    }
}

