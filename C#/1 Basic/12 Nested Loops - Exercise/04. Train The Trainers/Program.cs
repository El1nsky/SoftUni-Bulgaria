﻿using System;

namespace _04._Train_The_Trainers
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int juryCount = Convert.ToInt32(Console.ReadLine());

            string presentationName = Console.ReadLine();

            double totalGradeSum = 0;
            int presentationCount = 0;

            while (presentationName != "Finish")
            {
                double presentationGradeSum = 0;

                for (int i = 0; i < juryCount; i++)
                {
                    double grade = Convert.ToDouble(Console.ReadLine());
                    presentationGradeSum += grade;
                }

                double averageGrade = presentationGradeSum / juryCount;
                Console.WriteLine($"{presentationName} - {averageGrade:F2}.");

                totalGradeSum += presentationGradeSum;
                presentationCount++;

                presentationName = Console.ReadLine();
            }

            double finalAverageGrade = totalGradeSum / (juryCount * presentationCount);
            Console.WriteLine($"Student's final assessment is {finalAverageGrade:F2}.");
        }
    }
}