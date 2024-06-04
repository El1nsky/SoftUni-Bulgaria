using System;

namespace _01._Calculator_for_TV_Series
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the TV Series's name: ");
            string serialNamae = Console.ReadLine();

            Console.Write("Enter how many seasons: ");
            short seasonsAmount = Convert.ToInt16(Console.ReadLine());

            Console.Write("Enter how many episodes: ");
            short episodesAmount = Convert.ToInt16(Console.ReadLine());

            Console.Write("Episode duration: ");
            float episodesDuration = Convert.ToSingle(Console.ReadLine());

            double totalTime = (episodesDuration * 0.20 + episodesDuration) * episodesAmount * seasonsAmount + (seasonsAmount * 10);

            Console.Write($"\nTotal time needed to watch the {serialNamae} series is {totalTime} minutes.");

            Console.ReadLine();
        }
    }
}