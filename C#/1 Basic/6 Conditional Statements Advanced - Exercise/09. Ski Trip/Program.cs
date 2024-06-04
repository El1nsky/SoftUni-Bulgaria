using System;

namespace Ski_Trip
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Int16 stands = Convert.ToInt16(Console.ReadLine());
            String room = Console.ReadLine();
            String evaluation = Console.ReadLine();

            double[] stands_price = {(stands - 1) * 18,    //Room for one person.
                                     (stands - 1) * 25,    //Apartment.
                                     (stands - 1) * 35};   //President apartment.

            double[] positive_stands = {25.00 / 100.00 * stands_price[0] + stands_price[0],  //Room for one person.
                                        25.00 / 100.00 * stands_price[1] + stands_price[1],  //Apartment.
                                        25.00 / 100.00 * stands_price[2] + stands_price[2]}; //President apartment.

            double[] negative_stands = {(stands - 1) * 18 * 0.90,  //Room for one person.
                                        (stands - 1) * 25 * 0.90,  //Apartment.
                                        (stands - 1) * 35 * 0.90}; //President apartment.

            switch (room)
            {
                case "room for one person":
                    if (evaluation == "positive")
                    {
                        Console.WriteLine($"{positive_stands[0]:F2}");
                    }

                    else
                    {
                        Console.WriteLine($"{negative_stands[0]:F2}");
                    }
                    break;
                case "apartment":
                    if (stands < 10)
                    {
                        if (evaluation == "positive")
                        {
                            Console.WriteLine($"{positive_stands[1] * 0.70:F2}");
                        }
                        else
                        {
                            Console.WriteLine($"{negative_stands[1] * 0.70:F2}");
                        }
                    }
                    else if (stands >= 10 & stands <= 15)
                    {
                        if (evaluation == "positive")
                        {
                            Console.WriteLine($"{positive_stands[1] * 0.65:F2}");
                        }
                        else
                        {
                            Console.WriteLine($"{negative_stands[1] * 0.65:F2}");
                        }
                    }
                    else if (stands > 15)
                    {
                        if (evaluation == "positive")
                        {
                            Console.WriteLine($"{positive_stands[1] * 0.50:F2}");
                        }
                        else
                        {
                            Console.WriteLine($"{negative_stands[1] * 0.50:F2}");
                        }
                    }
                    break;
                case "president apartment":
                    if (stands < 10)
                    {
                        if (evaluation == "positive")
                        {
                            Console.WriteLine($"{positive_stands[2] * 0.90:F2}");
                        }
                        else
                        {
                            Console.WriteLine($"{negative_stands[2] * 0.90:F2}");
                        }
                    }
                    else if (stands >= 10 & stands <= 15)
                    {
                        if (evaluation == "positive")
                        {
                            Console.WriteLine($"{positive_stands[2] * 0.85:F2}");
                        }
                        else
                        {
                            Console.WriteLine($"{negative_stands[2] * 0.85:F2}");
                        }
                    }
                    else if (stands > 15)
                    {
                        if (evaluation == "positive")
                        {
                            Console.WriteLine($"{positive_stands[2] * 0.80:F2}");
                        }
                        else
                        {
                            Console.WriteLine($"{negative_stands[2] * 0.80:F2}");
                        }
                    }
                    break;
                default:
                    break;
            }
        }
    }
}