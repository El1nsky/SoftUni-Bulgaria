using System;

namespace Sum_Seconds
{
    class Program
    {
        static void Main(string[] args)
        {
            Int16 first_time = Convert.ToInt16(Console.ReadLine());

            Int16 second_time = Convert.ToInt16(Console.ReadLine());

            Int16 third_time = Convert.ToInt16(Console.ReadLine());

            Int32 total_time = first_time + second_time + third_time;
            Int32 minutes = total_time / 60;
            Int32 seconds = total_time % 60;

            if (seconds < 10)
            {
                Console.WriteLine($"{minutes}:0{seconds}");
            }
            else
            {
                Console.WriteLine($"{minutes}:{seconds}");
            }
        }
    }
}