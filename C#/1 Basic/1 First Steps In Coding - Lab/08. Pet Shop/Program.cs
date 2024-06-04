using System;

namespace Pet_Shop
{
    class Program
    {
        static void Main(string[] args)
        {
            double dog_food = 2.50;
            double cat_food = 4.00;

            int dog_food_packages = int.Parse(Console.ReadLine());
            int cat_food_packages = int.Parse(Console.ReadLine());

            Console.WriteLine($"{cat_food_packages * cat_food + dog_food_packages * dog_food} lv.");
        }
    }
}