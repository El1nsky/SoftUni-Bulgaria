using System;

namespace On_Time_for_the_Exam
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Int16 exam_hours = Convert.ToInt16(Console.ReadLine());
            Int16 exam_minutes = Convert.ToInt16(Console.ReadLine());
            Int16 arrival_hours = Convert.ToInt16(Console.ReadLine());
            Int16 arrival_minutes = Convert.ToInt16(Console.ReadLine());

            Int32 total_exam_minutes = exam_hours * 60 + exam_minutes;
            Int32 total_arrival_minutes = arrival_hours * 60 + arrival_minutes;
            Int32 difference_in_minutes = total_exam_minutes - total_arrival_minutes;

            if (difference_in_minutes >= 0 & difference_in_minutes <= 30)
            {
                Console.WriteLine("On time");
                Console.WriteLine($"{difference_in_minutes} minutes before the start");
            }

            else if (difference_in_minutes > 30)
            {
                Console.WriteLine("Early");

                if (difference_in_minutes >= 60)
                {
                    Int32 hours = difference_in_minutes / 60;
                    Int32 minutes = difference_in_minutes - hours * 60;

                    if (minutes < 10)
                    {
                        Console.WriteLine($"{hours}:0{minutes} hours before the start");
                    }
                    else
                    {
                        Console.WriteLine($"{hours}:{minutes} hours before the start");
                    }
                }

                else
                {
                    Console.WriteLine($"{difference_in_minutes} minutes before the start");
                }
            }

            else if (difference_in_minutes < 0)
            {
                Console.WriteLine("Late");
                difference_in_minutes = -difference_in_minutes;

                if (difference_in_minutes >= 60)
                {
                    Int32 hours = difference_in_minutes / 60;
                    Int32 minutes = difference_in_minutes - hours * 60;

                    if (minutes < 10)
                    {
                        Console.WriteLine($"{hours}:0{minutes} hours after the start");
                    }
                    else
                    {
                        Console.WriteLine($"{hours}:{minutes} hours after the start");
                    }
                }

                else
                {
                    Console.WriteLine($"{difference_in_minutes} minutes after the start");
                }
            }
        }
    }
}