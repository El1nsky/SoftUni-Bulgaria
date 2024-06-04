using System;

namespace Summer_Outfit
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Int16 temperature = Convert.ToInt16(Console.ReadLine());
            String time = Console.ReadLine();

            switch (time)
            {
                case "Morning":
                    if (temperature >= 10 & temperature <= 18)
                    {
                        Console.WriteLine($"It's {temperature} degrees, get your Sweatshirt and Sneakers.");
                    }
                    else if (temperature > 18 & temperature <= 24)
                    {
                        Console.WriteLine($"It's {temperature} degrees, get your Shirt and Moccasins.");
                    }
                    else if (temperature >= 25)
                    {
                        Console.WriteLine($"It's {temperature} degrees, get your T-Shirt and Sandals.");
                    }
                    else
                    {

                    }
                    break;
                case "Afternoon":
                    if (temperature >= 10 & temperature <= 18)
                    {
                        Console.WriteLine($"It's {temperature} degrees, get your Shirt and Moccasins.");
                    }
                    else if (temperature > 18 & temperature <= 24)
                    {
                        Console.WriteLine($"It's {temperature} degrees, get your T-Shirt and Sandals.");
                    }
                    else if (temperature >= 25)
                    {
                        Console.WriteLine($"It's {temperature} degrees, get your Swim Suit and Barefoot.");
                    }
                    else
                    {

                    }
                    break;
                case "Evening":
                    if (temperature >= 10 & temperature <= 18)
                    {
                        Console.WriteLine($"It's {temperature} degrees, get your Shirt and Moccasins.");
                    }
                    else if (temperature > 18 & temperature <= 24)
                    {
                        Console.WriteLine($"It's {temperature} degrees, get your Shirt and Moccasins.");
                    }
                    else if (temperature >= 25)
                    {
                        Console.WriteLine($"It's {temperature} degrees, get your Shirt and Moccasins.");
                    }
                    else
                    {

                    }
                    break;
            }
        }
    }
}