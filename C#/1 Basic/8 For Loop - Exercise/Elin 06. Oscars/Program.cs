using System;

namespace Elin_06._Oscars
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the actor's name: ");
            string actorName = Console.ReadLine();

            Console.WriteLine("Enter the academy's points: ");
            double academyPoints = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter the amount of critics: ");
            short critics = Convert.ToInt16(Console.ReadLine());

            for (int i = 0; i < critics; i++)
            {
                Console.WriteLine("Enter the name of the critic: ");
                string criticName = Console.ReadLine();

                Console.WriteLine("Enter critic's points: ");
                double criticPoints = Convert.ToDouble(Console.ReadLine());

                academyPoints += (criticName.Length * criticPoints / 2);

                if (academyPoints > 1250.5)
                {
                    break;
                }
            }

            if (academyPoints > 1250.5)
            {
                Console.WriteLine($"Congratulations, {actorName} got a nominee for leading role with {academyPoints:F1}!");
            }
            else
            {
                Console.WriteLine($"Sorry, {actorName} you need {1250.5 - academyPoints:F1} more!");
            }

            Console.ReadKey();
        }
    }
}