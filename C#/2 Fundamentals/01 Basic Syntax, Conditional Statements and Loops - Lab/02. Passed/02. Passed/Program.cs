using System;

class Passed
{
    static void Main(string[] args)
    {
        double grade = Convert.ToDouble(Console.ReadLine());
        
        if (grade >= 3.00)
            Console.Write("Passed!");
    }
}