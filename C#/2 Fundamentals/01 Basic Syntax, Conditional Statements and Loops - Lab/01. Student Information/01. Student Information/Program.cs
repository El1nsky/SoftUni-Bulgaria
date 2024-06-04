using System;

class StudentInformation
{
    static void Main(string[] args)
    {
        string studentName;
        ushort studentAge;
        double studentGrade;

        studentName = Console.ReadLine();

        studentAge = ushort.Parse(Console.ReadLine());

        studentGrade = double.Parse(Console.ReadLine());

        Console.WriteLine($"Name: {studentName}, Age: {studentAge}, Grade: {studentGrade:F2}");
    }
}
