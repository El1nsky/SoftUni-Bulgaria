using System;

class Program
{
    static void Main()
    {
        //Console.Write("Number of unsatisfactory grades: ");
        short unsatisfactoryGrades = Convert.ToInt16(Console.ReadLine());

        string lastProblem = "";
        short counterGrades = 0;
        short badGrades = 0;
        short gradesSum = 0;
        float average = 0.00f;

        do
        {
            //Console.Write("\nProblem name: ");
            string problemName = Console.ReadLine();


            if (problemName == "Enough") { break; }

           //Console.Write("\nGrade: ");
            short grade = Convert.ToInt16(Console.ReadLine());

            counterGrades++;
            gradesSum += grade;
            average = (float)gradesSum / counterGrades;

            if (grade <= 4) { badGrades++; }

            if (badGrades == unsatisfactoryGrades)
            {
                Console.Write($"\nYou need a break, {badGrades} poor grades.");
                return;
            }

            lastProblem = problemName;
        } 
        while (unsatisfactoryGrades != badGrades);

        Console.Write($"\nAverage score: {average:F2}\nNumber of problems: {counterGrades}\nLast problem: {lastProblem}");
        
        //Console.ReadKey();
    }
}
