using System;

namespace _01._Cat_Diet
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.Write("Enter % of fats: ");
            float fats = Convert.ToSingle(Console.ReadLine());

            //Console.Write("Enter % of proteins: ");
            float proteins = Convert.ToSingle(Console.ReadLine());

            //Console.Write("Enter % of carbs: ");
            float carbs = Convert.ToSingle(Console.ReadLine());

            //Console.Write("Total amount of calories: ");
            float calories = Convert.ToSingle(Console.ReadLine());

            //Console.Write("Hydration: ");
            float hydration = Convert.ToSingle(Console.ReadLine());

            float total_fat = (calories * fats) / 9;
            float total_proteins = (calories * proteins) / 4;
            float total_carbs = (calories * carbs) / 4;
            float total_food_weight =  total_fat + total_proteins + total_carbs;
            float calories_per_gram = calories / total_food_weight * 100;
            float result = calories_per_gram - (hydration * calories_per_gram) / 100;

            Console.WriteLine($"{result:F4}");

            //Console.ReadKey();
        }
    }
}