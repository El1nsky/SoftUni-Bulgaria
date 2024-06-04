using System;

namespace Fruit_Shop
{
    internal class Program
    {
        static void Main(string[] args)
        {

            String product = Console.ReadLine();
            String day = Console.ReadLine();
            String[] work_days = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
            String[] weekend = { "Saturday", "Sunday" };
            String[] product_1 = { "banana", "apple", "orange", "grapefruit", "kiwi", "pineapple", "grapes" };
            double quantity = Convert.ToDouble(Console.ReadLine());


            switch (product)
            {
                case "banana":
                    if (Array.IndexOf(work_days, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 2.50:F2}");
                    }
                    else if (Array.IndexOf(weekend, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 2.70:F2}");
                    }
                    else
                    {
                        Console.WriteLine("error");
                    }
                    break;
                case "apple":
                    if (Array.IndexOf(work_days, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 1.20:F2}");
                    }
                    else if (Array.IndexOf(weekend, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 1.25:F2}");
                    }
                    else
                    {
                        Console.WriteLine("error");
                    }
                    break;
                case "orange":
                    if (Array.IndexOf(work_days, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 0.85:F2}");
                    }
                    else if (Array.IndexOf(weekend, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 0.90:F2}");
                    }
                    else
                    {
                        Console.WriteLine("error");
                    }
                    break;
                case "grapefruit":
                    if (Array.IndexOf(work_days, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 1.45:F2}");
                    }
                    else if (Array.IndexOf(weekend, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 1.60:F2}");
                    }
                    else
                    {
                        Console.WriteLine("error");
                    }
                    break;
                case "kiwi":
                    if (Array.IndexOf(work_days, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 2.70:F2}");
                    }
                    else if (Array.IndexOf(weekend, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 3.00:F2}");
                    }
                    else
                    {
                        Console.WriteLine("error");
                    }
                    break;
                case "pineapple":
                    if (Array.IndexOf(work_days, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 5.50:F2}");
                    }
                    else if (Array.IndexOf(weekend, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 5.60:F2}");
                    }
                    else
                    {
                        Console.WriteLine("error");
                    }
                    break;
                case "grapes":
                    if (Array.IndexOf(work_days, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 3.85:F2}");
                    }
                    else if (Array.IndexOf(weekend, day) >= 0 & Array.IndexOf(product_1, product) >= 0)
                    {
                        Console.WriteLine($"{quantity * 4.20:F2}");
                    }
                    else
                    {
                        Console.WriteLine("error");
                    }
                    break;
                default:
                    Console.WriteLine("error");
                    break;
            }
        }
    }
}