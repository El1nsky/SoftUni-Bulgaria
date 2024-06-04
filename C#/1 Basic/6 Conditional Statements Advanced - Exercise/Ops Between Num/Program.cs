using System;
using System.Runtime.CompilerServices;

namespace Operations_Between_Numbers
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Int32 number_1 = Convert.ToInt32(Console.ReadLine());
            Int32 number_2 = Convert.ToInt32(Console.ReadLine());
            String operation = Console.ReadLine();
            double result = 0;

            switch (operation)
            {
                case "+":
                    result = number_1 + number_2;

                    if (result % 2 == 0)
                    {
                        Console.WriteLine($"{number_1} + {number_2} = {result} - even");

                    }
                    else
                    {
                        Console.WriteLine($"{number_1} + {number_2} = {result} - odd");
                    }
                    break;
                case "-":
                    result = number_1 - number_2;

                    if (result % 2 == 0)
                    {
                        Console.WriteLine($"{number_1} - {number_2} = {result} - even");

                    }
                    else
                    {
                        Console.WriteLine($"{number_1} - {number_2} = {result} - odd");
                    }
                    break;
                case "*":
                    result = number_1 * number_2;

                    if (result % 2 == 0)
                    {
                        Console.WriteLine($"{number_1} * {number_2} = {result} - even");

                    }
                    else
                    {
                        Console.WriteLine($"{number_1} * {number_2} = {result} - odd");
                    }
                    break;
                case "/":
                    if (number_2 == 0)
                    {
                        Console.WriteLine($"Cannot divide {number_1} by zero");
                    }
                    else
                    {
                        result = (double)number_1 / (double)number_2;

                        Console.WriteLine($"{number_1} / {number_2} = {result:F2}");
                    }
                    break;
                case "%":


                    if (number_2 == 0)
                    {
                        Console.WriteLine($"Cannot divide {number_1} by zero");
                    }
                    else
                    {
                        result = number_1 % number_2;

                        Console.WriteLine($"{number_1} % {number_2} = {result}");
                    }
                    break;
                default:
                    break;
            }
        }
    }
}