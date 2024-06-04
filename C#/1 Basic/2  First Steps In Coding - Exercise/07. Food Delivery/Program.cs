using System;

namespace Food_Delivery
{
    class Program
    {
        static void Main(string[] args)
        {
            double chicken_menu_price = 10.35;
            double fish_menu_price = 12.40;
            double vegetarian_menu_price = 8.15;
            double delivery_tax = 2.50;

            Console.WriteLine("How many chicken menues do you want to order?: ");
            int chicken_menu_amount = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("How many fish menues do you want to order?: ");
            int fish_menu_amount = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("How many fish menues do you want to order?: ");
            int vegetarian_menu_amount = Convert.ToInt32(Console.ReadLine());

            double menues_total = (chicken_menu_amount * chicken_menu_price) + (fish_menu_amount * fish_menu_price) + (vegetarian_menu_amount * vegetarian_menu_price);

            Console.WriteLine($"The cost of your order is: {(menues_total * 0.20) + menues_total + delivery_tax} BGN");
        }
    }
}