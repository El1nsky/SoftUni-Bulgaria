using System;

namespace Godzilla_vs._Kong
{
    class Program
    {
        static void Main(string[] args)
        {
            double movie_budged = Convert.ToDouble(Console.ReadLine());
            Int16 extras_amount = Convert.ToInt16(Console.ReadLine());
            double clothing_price = Convert.ToDouble(Console.ReadLine());

            double decor_price = 0.10 * movie_budged;
            double clothing_price_total = extras_amount * clothing_price;

            if (extras_amount > 150)
            {
                clothing_price_total = clothing_price_total - (0.10 * clothing_price_total);
            }

            double movie_cost = clothing_price_total + decor_price;

            if (movie_cost <= movie_budged)
            {
                Console.WriteLine($"Action!\nWingard starts filming with {movie_budged - movie_cost:F2} leva left.");
            }
            else
            {
                Console.WriteLine($"Not enough money!\nWingard needs {Math.Abs(movie_budged - movie_cost):F2} leva more.");
            }
        }
    }
}