using System;

namespace New_House
{
    class Program
    {
        static void Main(string[] args)
        {
            String flowers = Console.ReadLine();
            Int16 flowers_amount = Convert.ToInt16(Console.ReadLine());
            Int16 budged = Convert.ToInt16(Console.ReadLine());

            switch (flowers)
            {
                case "Roses":
                    if (flowers_amount <= 80 & budged >= flowers_amount * 5)
                    {
                        Console.WriteLine($"Hey, you have a great garden with {flowers_amount} {flowers} and {budged - flowers_amount * 5:F2} leva left.");

                    }
                    else if (flowers_amount > 80 & budged >= flowers_amount * 5 * 0.90)
                    {
                        Console.WriteLine($"Hey, you have a great garden with {flowers_amount} {flowers} and {budged - flowers_amount * 5 * 0.90:F2} leva left.");

                    }
                    else if (flowers_amount > 80 & budged < flowers_amount * 5 * 0.90)
                    {
                        Console.WriteLine($"Not enough money, you need {Math.Abs(budged - flowers_amount * 5 * 0.90):F2} leva more.");

                    }
                    else
                    {
                        Console.WriteLine($"Not enough money, you need {Math.Abs(budged - flowers_amount * 5):F2} leva more.");
                    }
                    break;
                case "Dahlias":
                    if (flowers_amount <= 90 & budged >= flowers_amount * 3.80)
                    {
                        Console.WriteLine($"Hey, you have a great garden with {flowers_amount} {flowers} and {budged - flowers_amount * 3.80:F2} leva left.");

                    }
                    else if (flowers_amount > 90 & budged >= flowers_amount * 3.80 * 0.85)
                    {
                        Console.WriteLine($"Hey, you have a great garden with {flowers_amount} {flowers} and {budged - flowers_amount * 3.80 * 0.85:F2} leva left.");

                    }
                    else if (flowers_amount > 90 & budged < flowers_amount * 3.80 * 0.85)
                    {
                        Console.WriteLine($"Not enough money, you need {Math.Abs(budged - flowers_amount * 3.80 * 0.85):F2} leva more.");

                    }
                    else
                    {
                        Console.WriteLine($"Not enough money, you need {Math.Abs(budged - flowers_amount * 3.80):F2} leva more.");
                    }
                    break;
                case "Tulips":
                    if (flowers_amount <= 80 & budged >= flowers_amount * 2.80)
                    {
                        Console.WriteLine($"Hey, you have a great garden with {flowers_amount} {flowers} and {budged - flowers_amount * 2.80:F2} leva left.");

                    }
                    else if (flowers_amount > 80 & budged >= flowers_amount * 2.80 * 0.85)
                    {
                        Console.WriteLine($"Hey, you have a great garden with {flowers_amount} {flowers} and {budged - flowers_amount * 2.80 * 0.85:F2} leva left.");

                    }
                    else if (flowers_amount > 120 & budged < flowers_amount * 2.80 * 0.85)
                    {
                        Console.WriteLine($"Not enough money, you need {Math.Abs(budged - flowers_amount * 2.80 * 0.85):F2} leva more.");

                    }
                    else
                    {
                        Console.WriteLine($"Not enough money, you need {Math.Abs(budged - flowers_amount * 2.80):F2} leva more.");
                    }
                    break;
                case "Narcissus":
                    if (flowers_amount < 120 & budged >= flowers_amount * (15.00 / 100.00 * 3.00 + 3.00))
                    {
                        Console.WriteLine($"Hey, you have a great garden with {flowers_amount} {flowers} and {budged - flowers_amount * (15.00 / 100.00 * 3.00 + 3.00):F2} leva left.");

                    }
                    else if (flowers_amount >= 120 & budged >= flowers_amount * 3)
                    {
                        Console.WriteLine($"Hey, you have a great garden with {flowers_amount} {flowers} and {budged - flowers_amount * 3:F2} leva left.");

                    }
                    else if (flowers_amount < 120 & budged < flowers_amount * (15.00 / 100.00 * 3.00 + 3.00))
                    {
                        Console.WriteLine($"Not enough money, you need {Math.Abs(budged - flowers_amount * (15.00 / 100.00 * 3.00 + 3.00)):F2} leva more.");

                    }
                    else
                    {
                        Console.WriteLine($"Not enough money, you need {Math.Abs(budged - flowers_amount * 3):F2} leva more.");
                    }
                    break;
                case "Gladiolus":

                    if (flowers_amount < 80 & budged >= flowers_amount * (20.00 / 100.00 * 2.50 + 2.50))
                    {
                        Console.WriteLine($"Hey, you have a great garden with {flowers_amount} {flowers} and {budged - flowers_amount * (20.00 / 100.00 * 2.50 + 2.50):F2} leva left.");

                    }
                    else if (flowers_amount >= 80 & budged >= flowers_amount * 2.50)
                    {
                        Console.WriteLine($"Hey, you have a great garden with {flowers_amount} {flowers} and {budged - flowers_amount * 2.50:F2} leva left.");

                    }
                    else if (flowers_amount < 80 & budged < flowers_amount * (20 / 100.00 * 2.50 + 2.50))
                    {
                        Console.WriteLine($"Not enough money, you need {Math.Abs(budged - flowers_amount * (20.00 / 100.00 * 2.50 + 2.50)):F2} leva more.");

                    }
                    else
                    {
                        Console.WriteLine($"Not enough money, you need {Math.Abs(budged - flowers_amount * 2.50):F2} leva more.");

                    }
                    break;
                default:
                    break;
            }
        }
    }
}







