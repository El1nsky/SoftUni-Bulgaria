using System;

namespace Concatenate_Data
{
    class Program
    {
        static void Main(string[] args)
        {
            string first_name = Console.ReadLine();
            string last_name = Console.ReadLine();
            int age = int.Parse(Console.ReadLine());
            string town = Console.ReadLine();

            Console.WriteLine($"You are {first_name} {last_name}, a {age}-years old person from {town}.");
        }
    }
}