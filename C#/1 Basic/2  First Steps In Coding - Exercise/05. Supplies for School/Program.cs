using System;
using System.Security.Authentication;

namespace Supplies_for_School
{
    class Program
    {
        static void Main(string[] args)
        {
            double pencil_slv_price = 5.80;
            double marker_sleeve_price = 7.20;
            double marker_cleaner_price = 1.20;

            Console.WriteLine("Enter number of pencil sleeves: ");
            int pencil_sleeves = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter number of marker sleeves: ");
            int marker_sleeves = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter liters of marker cleaner: ");
            double marker_cleaner_liters = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter amount of discount in %");
            double discount = Convert.ToDouble(Console.ReadLine());

            double total_money_for_materials = pencil_sleeves * pencil_slv_price + marker_sleeves * marker_sleeve_price + marker_cleaner_liters * marker_cleaner_price;

            Console.WriteLine("Total money needed for materials: ");
            Console.WriteLine(total_money_for_materials - (total_money_for_materials * discount / 100));
        }
    }
}