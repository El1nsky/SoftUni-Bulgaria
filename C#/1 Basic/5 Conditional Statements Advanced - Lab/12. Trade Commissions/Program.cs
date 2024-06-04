using System;

namespace Trade_Commissions
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string city = Console.ReadLine();
            double sales = Convert.ToDouble(Console.ReadLine());

            switch (city)
            {
                case "Sofia":
                    if (sales >= 0 & sales <= 500)
                    {
                        Console.WriteLine($"{sales * 5 / 100:F2}");
                    }
                    else if (sales > 500 & sales <= 1000)
                    {
                        Console.WriteLine($"{sales * 7 / 100:F2}");
                    }
                    else if (sales > 1000 & sales <= 10000)
                    {
                        Console.WriteLine($"{sales * 8 / 100:F2}");
                    }
                    else if (sales > 10000)
                    {
                        Console.WriteLine($"{sales * 12 / 100:F2}");
                    }
                    else
                    {
                        Console.WriteLine("error");
                    }
                    break;
                case "Varna":
                    if (sales >= 0 & sales <= 500)
                    {
                        Console.WriteLine($"{sales * 4.5 / 100:F2}");
                    }
                    else if (sales > 500 & sales <= 1000)
                    {
                        Console.WriteLine($"{sales * 7.5 / 100:F2}");
                    }
                    else if (sales > 1000 & sales <= 10000)
                    {
                        Console.WriteLine($"{sales * 10 / 100:F2}");
                    }
                    else if (sales > 10000)
                    {
                        Console.WriteLine($"{sales * 13 / 100:F2}");
                    }
                    else
                    {
                        Console.WriteLine("error");
                    }
                    break;
                case "Plovdiv":
                    if (sales >= 0 & sales <= 500)
                    {
                        Console.WriteLine($"{sales * 5.5 / 100:F2}");
                    }
                    else if (sales > 500 & sales <= 1000)
                    {
                        Console.WriteLine($"{sales * 8 / 100:F2}");
                    }
                    else if (sales > 1000 & sales <= 10000)
                    {
                        Console.WriteLine($"{sales * 12 / 100:F2}");
                    }
                    else if (sales > 10000)
                    {
                        Console.WriteLine($"{sales * 14.5 / 100:F2}");
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