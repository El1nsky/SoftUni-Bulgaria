using System;

namespace Journey
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double budged = Convert.ToDouble(Console.ReadLine());
            String seasons = Console.ReadLine();
            String[] destination_and_type = { "Bulgaria", "Balkans", "Europe", "Camp", "Hotel" };

            switch (seasons)
            {
                case "summer":
                    if (budged <= 100)
                    {
                        Console.WriteLine($"Somewhere in {destination_and_type[0]}");
                        Console.WriteLine($"{destination_and_type[3]} - {budged * 0.30:F2}");
                    }

                    else if (budged <= 1000)
                    {
                        Console.WriteLine($"Somewhere in {destination_and_type[1]}");
                        Console.WriteLine($"{destination_and_type[3]} - {budged * 0.40:F2}");
                    }
                    else if (budged > 1000)
                    {
                        Console.WriteLine($"Somewhere in {destination_and_type[2]}");
                        Console.WriteLine($"{destination_and_type[4]} - {budged * 0.90:F2}");
                    }
                    break;
                case "winter":
                    if (budged <= 100)
                    {
                        Console.WriteLine($"Somewhere in {destination_and_type[0]}");
                        Console.WriteLine($"{destination_and_type[4]} - {budged * 0.70:F2}");
                    }

                    else if (budged <= 1000)
                    {
                        Console.WriteLine($"Somewhere in {destination_and_type[1]}");
                        Console.WriteLine($"{destination_and_type[4]} - {budged * 0.80:F2}");
                    }
                    else if (budged > 1000)
                    {
                        Console.WriteLine($"Somewhere in {destination_and_type[2]}");
                        Console.WriteLine($"{destination_and_type[4]} - {budged * 0.90:F2}");
                    }
                    break;
            }
        }
    }
}