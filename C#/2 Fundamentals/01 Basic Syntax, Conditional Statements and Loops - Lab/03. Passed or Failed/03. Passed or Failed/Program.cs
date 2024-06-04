using System;

class PassedOrFailed
{
    static void Main(string[] args)
    {
        double grade = Convert.ToDouble(Console.ReadLine());

        if (grade >= 3.00)
        Console.Write("Passed!");
        else
        Console.Write("Failed!");
    }
}