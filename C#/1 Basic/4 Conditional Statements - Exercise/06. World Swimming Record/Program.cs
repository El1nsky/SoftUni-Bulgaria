using System;

namespace World_Swimming_Record
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double record_seconds = Convert.ToDouble(Console.ReadLine());
            double distance_m = Convert.ToDouble(Console.ReadLine());
            double time_seconds = Convert.ToDouble(Console.ReadLine());

            double time_needed = distance_m * time_seconds;
            double water_resistance = Math.Floor(distance_m / 15.00) * 12.50;
            double total_time = time_needed + water_resistance;

            if (record_seconds <= total_time)
            {
                double fail = total_time - record_seconds;
                Console.WriteLine($"No, he failed! He was {fail:F2} seconds slower.");
            }

            else
            {
                Console.WriteLine($"Yes, he succeeded! The new world record is {total_time:F2} seconds.");
            }
        }
    }
}