using System;

namespace Small_Shop
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //I think this could be much easier, simpler and faster if we use arrays here :/

            string product = Console.ReadLine();
            string city = Console.ReadLine();
            decimal quantity = Convert.ToDecimal(Console.ReadLine());



            switch (city)
            {
                case "Sofia":
                    if (product == "coffee")
                    {
                        Console.WriteLine($"{(quantity * 0.50m):F1}");
                    }
                    if (product == "water")
                    {
                        Console.WriteLine($"{(quantity * 0.80m):F1}");
                    }
                    if (product == "beer")
                    {
                        Console.WriteLine($"{(quantity * 1.20m):F1}");
                    }
                    if (product == "sweets")
                    {
                        Console.WriteLine(quantity * 1.45m);
                    }
                    if (product == "peanuts")
                    {
                        Console.WriteLine($"{(quantity * 1.60m):F1}"); ;
                    }
                    break;
                case "Plovdiv":
                    if (product == "coffee")
                    {
                        Console.WriteLine($"{(quantity * 0.40m):F1}");
                    }
                    if (product == "water")
                    {
                        Console.WriteLine($"{(quantity * 0.70m):F1}");
                    }
                    if (product == "beer")
                    {
                        Console.WriteLine($"{(quantity * 1.15m):F1}");
                    }
                    if (product == "sweets")
                    {
                        Console.WriteLine(quantity * 1.30m);
                    }
                    if (product == "peanuts")
                    {
                        Console.WriteLine($"{(quantity * 1.50m):F1}");
                    }
                    break;
                case "Varna":
                    if (product == "coffee")
                    {
                        Console.WriteLine($"{(quantity * 0.45m):F1}");
                    }
                    if (product == "water")
                    {
                        Console.WriteLine($"{(quantity * 0.70m):F1}");
                    }
                    if (product == "beer")
                    {
                        Console.WriteLine($"{(quantity * 1.10m):F1}");
                    }
                    if (product == "sweets")
                    {
                        Console.WriteLine(quantity * 1.35m);
                    }
                    if (product == "peanuts")
                    {
                        Console.WriteLine($"{(quantity * 1.55m):F1}");
                    }
                    break;
                default:
                    break;
            }
        }
    }
}