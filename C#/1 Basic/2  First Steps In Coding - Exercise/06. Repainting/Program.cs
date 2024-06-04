using System;

namespace Repainting
{
    class Program
    {
        static void Main(string[] args)
        {
            double safete_nylon_price = 1.50;
            double paint_price = 14.50;
            double paint_thinner = 5.00;
            double bag_price = 0.40;

            Console.WriteLine("Enter needed amount of nylon: ");
            int km_sqr_2 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter amount of paint needed: ");
            int amount_of_paint = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter amount of paint thinner needed: ");
            int amount_of_paint_thinner = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter hours amount: ");
            int hours = Convert.ToInt32(Console.ReadLine());

            double nylon_value = (km_sqr_2 + 2) * safete_nylon_price;
            double paint_value = (10.00 / 100.00 * amount_of_paint + amount_of_paint) * paint_price;
            double thinner_value = amount_of_paint_thinner * paint_thinner;
            double total_material_value = nylon_value + paint_value + thinner_value + bag_price;
            double end_value = (total_material_value * 0.3) * hours + total_material_value;

            Console.WriteLine("Total expenses: " + end_value);
        }
    }
}