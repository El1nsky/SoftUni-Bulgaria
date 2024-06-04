using System;

namespace Cinema
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string projection = Console.ReadLine();
            Int16 rows = Convert.ToInt16(Console.ReadLine());
            Int16 column = Convert.ToInt16(Console.ReadLine());

            switch (projection)
            {
                case "Premiere":
                    Console.WriteLine($"{rows * column * 12.00:F2}");
                    break;
                case "Normal":
                    Console.WriteLine($"{rows * column * 7.50:F2}");
                    break;
                case "Discount":
                    Console.WriteLine($"{rows * column * 5.00:F2}");
                    break;
                default:
                    break;
            }
        }
    }
}