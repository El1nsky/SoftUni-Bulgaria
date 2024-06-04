using System;

namespace _06._Oscars
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string actor_name = Console.ReadLine();
            double academy_points = Convert.ToDouble(Console.ReadLine());
            int evaluators_count = Convert.ToInt32(Console.ReadLine());

            double total_points = academy_points;

            for (int i = 0; i < evaluators_count; i++)
            {
                string evaluator_name = Console.ReadLine();
                double evaluator_points = Convert.ToDouble(Console.ReadLine());

                double points_to_add = evaluator_name.Length * evaluator_points / 2;
                total_points += points_to_add;

                if (total_points > 1250.5)
                {
                    Console.WriteLine($"Congratulations, {actor_name} got a nominee for leading role with {total_points:f1}!");
                    return;
                }
            }

            double points_needed = 1250.5 - total_points;
            Console.WriteLine($"Sorry, {actor_name} you need {points_needed:f1} more!");
        }
    }
}