using System;

namespace Lunch_Break
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string title = Console.ReadLine();
            Int16 title_lenght = Convert.ToInt16(Console.ReadLine());
            Int16 break_lenght = Convert.ToInt16(Console.ReadLine());

            double time_for_lunch = break_lenght * 1.0 / 8.0;
            double time_for_break = break_lenght * 1.0 / 4.0;
            double time_left = break_lenght - time_for_lunch - time_for_break;


            if (time_left >= title_lenght)
            {
                Console.WriteLine($"You have enough time to watch {title} and left with {Math.Ceiling(time_left - title_lenght)} minutes free time.");
            }

            else
            {
                Console.WriteLine($"You don't have enough time to watch {title}, you need {Math.Ceiling(title_lenght - time_left)} more minutes.");
            }
        }
    }
}