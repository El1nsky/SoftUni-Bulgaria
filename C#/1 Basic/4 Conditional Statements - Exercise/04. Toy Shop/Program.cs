using System;

namespace Toy_Shop
{
    class Program
    {
        static void Main(string[] args)
        {
            Int16 talking_puppets = 3;
            Int16 trucks = 2;
            double puzzles = 2.60;
            double teddy_bears = 4.10;
            double minions = 8.20;

            double excursion_price = Convert.ToDouble(Console.ReadLine());
            Int16 puzzle_amount = Convert.ToInt16(Console.ReadLine());
            Int16 talking_puppets_amount = Convert.ToInt16(Console.ReadLine());
            Int16 teddy_bear_amount = Convert.ToInt16(Console.ReadLine());
            Int16 minions_amount = Convert.ToInt16(Console.ReadLine());
            Int16 trucks_amount = Convert.ToInt16(Console.ReadLine());

            double sum = (puzzle_amount * puzzles) + (talking_puppets_amount * talking_puppets) + (teddy_bear_amount * teddy_bears) + (minions_amount * minions) + (trucks_amount * trucks);
            Int32 total_toys = puzzle_amount + talking_puppets_amount + teddy_bear_amount + minions_amount + trucks_amount;


            if (total_toys >= 50)
            {
                sum = sum - (sum * 0.25);
            }

            sum = sum - (sum * 0.1);

            if (sum >= excursion_price)
            {
                double result_0 = sum - excursion_price;
                Console.WriteLine($"Yes! {(result_0):F2} lv left.");
            }
            else
            {
                double result_1 = excursion_price - sum;
                Console.WriteLine($"Not enough money! {(result_1):F2} lv needed.");
            }
        }
    }
}