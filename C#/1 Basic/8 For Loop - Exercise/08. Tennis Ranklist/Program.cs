using System;

namespace _08._Tennis_Ranklist
{
    class Program
    {
        static void Main(string[] args)
        {
            int tournaments = Convert.ToInt32(Console.ReadLine());
            int initial_points = Convert.ToInt32(Console.ReadLine());

            int total_points = initial_points;
            int tournament_wins = 0;

            for (int i = 0; i < tournaments; i++)
            {
                string stage = Console.ReadLine();
                switch (stage)
                {
                    case "W":
                        total_points += 2000;
                        tournament_wins++;
                        break;
                    case "F":
                        total_points += 1200;
                        break;
                    case "SF":
                        total_points += 720;
                        break;
                }
            }

            Console.WriteLine($"Final points: {total_points}");
            Console.WriteLine($"Average points: {(total_points - initial_points) / tournaments}");
            Console.WriteLine($"{(double)tournament_wins / tournaments * 100:F2}%");
        }
    }
}