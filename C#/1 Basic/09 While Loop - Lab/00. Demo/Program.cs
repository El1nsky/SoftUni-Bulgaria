using System;
using System.Diagnostics;
using System.Net.Http.Headers;

namespace _00._Demo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.Write("Enter student's Name: ");
            string studentName = Console.ReadLine();
            short counterGrades = 0;
            short counterClass = 1;
            float gradeSum = 0;
            float average;

            while (counterClass <= 12)
            {
                //Console.Write("Enter studnet's grades: ");
                string input = Console.ReadLine();
                float grade; 

                try
                {
                    grade = Convert.ToSingle(input);
                    
                }
                catch (FormatException)
                {
                    Console.Write($"{studentName} has been excluded at {counterClass} grade");
                    return;
                }

                if (grade >= 4)
                {
                    counterClass++;
                    gradeSum += grade;
                    counterGrades++;
                }
                else 
                {
                    Console.Write($"{studentName} has been excluded at {counterClass} grade");
                    return;
                }
            }

            average = gradeSum / counterGrades;
            Console.Write($"{studentName} graduated. Average grade: {average:F2}");


            //Console.ReadKey();
        }
    }
}