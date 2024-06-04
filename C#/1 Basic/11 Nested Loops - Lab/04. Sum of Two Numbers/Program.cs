using System;

namespace _04._Sum_of_Two_Numbers
{
    internal class Program
    {
        static void Main(string[] args)
        {
            short start = Convert.ToInt16(Console.ReadLine());
            short end = Convert.ToInt16(Console.ReadLine());
            short magicNumber = Convert.ToInt16(Console.ReadLine());

            int combinationsCount = 0;
            bool combinationFound = false;

            for (short num1 = start; num1 <= end; num1++)
            {
                for (short num2 = start; num2 <= end; num2++)
                {
                    combinationsCount++;

                    if (num1 + num2 == magicNumber)
                    {
                        Console.WriteLine($"Combination N:{combinationsCount} ({num1} + {num2} = {magicNumber})");
                        combinationFound = true;
                        break;
                    }
                }

                if (combinationFound)
                {
                    break;
                }
            }

            if (!combinationFound)
            {
                Console.WriteLine($"{combinationsCount} combinations - neither equals {magicNumber}");
            }
        }
    }
}