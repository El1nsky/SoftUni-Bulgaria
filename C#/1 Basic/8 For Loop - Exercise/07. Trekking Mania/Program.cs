using System;

namespace _07._Trekking_Mania
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int number_of_groups = Convert.ToInt32(Console.ReadLine());
            int musala_count = 0;
            int mont_blanc_count = 0;
            int kilimanjaro_count = 0;
            int k2_count = 0;
            int everest_count = 0;

            for (int i = 0; i < number_of_groups; i++)
            {
                int group_size = Convert.ToInt32(Console.ReadLine());

                if (group_size <= 5)
                {
                    musala_count += group_size;
                }
                else if (group_size <= 12)
                {
                    mont_blanc_count += group_size;
                }
                else if (group_size <= 25)
                {
                    kilimanjaro_count += group_size;
                }
                else if (group_size <= 40)
                {
                    k2_count += group_size;
                }
                else
                {
                    everest_count += group_size;
                }
            }

            int total_climbers = musala_count + mont_blanc_count + kilimanjaro_count + k2_count + everest_count;
            double musala_percentage = (musala_count * 100.0) / total_climbers;
            double mont_blanc_percentage = (mont_blanc_count * 100.0) / total_climbers;
            double kilimanjaro_percentage = (kilimanjaro_count * 100.0) / total_climbers;
            double k2_percentage = (k2_count * 100.0) / total_climbers;
            double everest_percentage = (everest_count * 100.0) / total_climbers;

            Console.WriteLine($"{musala_percentage:F2}%");
            Console.WriteLine($"{mont_blanc_percentage:F2}%");
            Console.WriteLine($"{kilimanjaro_percentage:F2}%");
            Console.WriteLine($"{k2_percentage:F2}%");
            Console.WriteLine($"{everest_percentage:F2}%");
        }
    }
}