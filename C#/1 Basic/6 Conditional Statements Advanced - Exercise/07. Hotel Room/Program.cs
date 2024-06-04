using System;

namespace Hotel_Room
{
    class Program
    {
        static void Main(string[] args)
        {
            String months = Console.ReadLine();
            Int16 stands = Convert.ToInt16(Console.ReadLine());
            double[] prices_studio = { 50, 75.20, 76 };
            double[] prices_apartment = { 65, 68.70, 77 };

            switch (months)
            {
                case "May":
                case "October":
                    if (stands > 7 & stands <= 14)
                    {
                        Console.WriteLine($"Apartment: {stands * prices_apartment[0]:F2} lv.");
                        Console.WriteLine($"Studio: {stands * prices_studio[0] * 0.95:F2} lv.");
                    }
                    else if (stands > 14)
                    {
                        Console.WriteLine($"Apartment: {stands * prices_apartment[0] * 0.90:F2} lv.");
                        Console.WriteLine($"Studio: {stands * prices_studio[0] * 0.70:F2} lv.");
                    }
                    else
                    {
                        Console.WriteLine($"Apartment: {stands * prices_apartment[0]:F2} lv.");
                        Console.WriteLine($"Studio: {stands * prices_studio[0]:F2} lv.");
                    }
                    break;
                case "June":
                case "September":
                    if (stands > 14)
                    {
                        Console.WriteLine($"Apartment: {stands * prices_apartment[1] * 0.90:F2} lv.");
                        Console.WriteLine($"Studio: {stands * prices_studio[1] * 0.80:F2} lv.");
                    }
                    else
                    {
                        Console.WriteLine($"Apartment: {stands * prices_apartment[1]:F2} lv.");
                        Console.WriteLine($"Studio: {stands * prices_studio[1]:F2} lv.");
                    }
                    break;
                case "July":
                case "August":
                    if (stands > 14)
                    {
                        Console.WriteLine($"Apartment: {stands * prices_apartment[2] * 0.90:F2} lv.");
                        Console.WriteLine($"Studio: {stands * prices_studio[2]:F2} lv.");
                    }
                    else
                    {
                        Console.WriteLine($"Apartment: {stands * prices_apartment[2]:F2} lv.");
                        Console.WriteLine($"Studio: {stands * prices_studio[2]:F2} lv.");
                    }
                    break;
                default:
                    break;
            }
        }
    }
}