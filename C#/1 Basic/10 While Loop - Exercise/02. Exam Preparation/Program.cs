using System;

namespace _02._Exam_Preparation
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.Write("Unsatisfactory grades: ");
            short unsatisfactoryGrades = Convert.ToInt16(Console.ReadLine());

            //Console.Write("\nTask name: ");
            string taskName = Console.ReadLine();

            short solvedTasks = 0;
            float totalScore = 0;
            short unsatisfactoryCount = 0;
            string lastProblem = "";

            while (taskName != "Enough")
            {
                //Console.Write("\nScoring: ");
                short score = Convert.ToInt16(Console.ReadLine());

                solvedTasks++;
                totalScore += score;
                lastProblem = taskName;

                if (score <= 4)
                    unsatisfactoryCount++;

                if (unsatisfactoryCount == unsatisfactoryGrades)
                {
                    Console.Write($"You need a break, {unsatisfactoryGrades} poor grades.");
                    return;
                }

                //Console.Write("\nTask name: ");
                taskName = Console.ReadLine();
            }

            float averageScore = totalScore / solvedTasks;

            Console.WriteLine($"Average score: {averageScore:F2}");
            Console.WriteLine($"Number of problems: {solvedTasks}");
            Console.WriteLine($"Last problem: {lastProblem}");

            //Console.ReadKey();
        }
    }
}