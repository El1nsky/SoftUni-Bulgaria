using System;

namespace Time_15Minutes
{
    class Program
    {
        static void Main(string[] args)
        {
            int input_hours = Convert.ToInt32(Console.ReadLine());
            int input_minutes = Convert.ToInt32(Console.ReadLine());

            int total_minutes = (input_hours * 60) + input_minutes + 15;

            int output_hours = total_minutes / 60;
            int output_minutes = total_minutes % 60;

            if (output_hours == 24)
            {
                if (output_minutes < 10)
                {
                    Console.WriteLine($"0:0{output_minutes}");

                }
                else
                {
                    Console.WriteLine($"0:{output_minutes}");
                }
            }
            else if (output_minutes < 10)
            {
                Console.WriteLine($"{output_hours}:0{output_minutes}");
            }
            else
            {
                Console.WriteLine($"{output_hours}:{output_minutes}");
            }
        }
    }
}