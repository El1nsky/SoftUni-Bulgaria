using System;

namespace Animal_Type
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string animal = Console.ReadLine();

            switch (animal)
            {
                case "dog":
                    Console.WriteLine("mammal");
                    break;
                case "snake":
                    Console.WriteLine("reptile");
                    break;
                case "cat":
                    Console.WriteLine("unknown"); //Is this a joke?
                    break;
                case "crocodile":
                    Console.WriteLine("reptile");
                    break;
                case "tortoise":
                    Console.WriteLine("reptile");
                    break;
                default:
                    Console.WriteLine("unknown");
                    break;
            }
        }
    }
}