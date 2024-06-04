using System;

namespace _08._Graduation
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string studentName = Console.ReadLine();
            int currentGrade = 1;
            int totalGrades = 0;
            float gradeSum = 0.0f;

            while (currentGrade <= 12)
            {
                string input = Console.ReadLine();
                float grade;

                try
                {
                    grade = Convert.ToSingle(input);
                }
                catch (FormatException)
                {
                    Console.WriteLine($"{studentName} has been excluded at {currentGrade} grade");
                    return;
                }

                if (grade >= 4.00f)
                {
                    totalGrades++;
                    gradeSum += grade;
                    currentGrade++;
                }
                else
                {
                    Console.WriteLine($"{studentName} has been excluded at {currentGrade} grade");
                    return;
                }
            }

            float gpa = gradeSum / totalGrades;

            Console.WriteLine($"{studentName} graduated. Average grade: {gpa:F2}");
        }
    }
}