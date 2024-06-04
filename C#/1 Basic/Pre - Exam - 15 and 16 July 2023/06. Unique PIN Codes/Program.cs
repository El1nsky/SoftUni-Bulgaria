using System;

namespace _06._Unique_PIN_Codes
{
    internal class Program
    {
        static void Main()
        {
            int firstDigitUpperLimit = int.Parse(Console.ReadLine());
            int secondDigitUpperLimit = int.Parse(Console.ReadLine());
            int thirdDigitUpperLimit = int.Parse(Console.ReadLine());

            for (int firstDigit = 2; firstDigit <= firstDigitUpperLimit; firstDigit += 2)
            {
                for (int secondDigit = 2; secondDigit <= secondDigitUpperLimit; secondDigit++)
                {
                    if (IsPrime(secondDigit))
                    {
                        for (int thirdDigit = 2; thirdDigit <= thirdDigitUpperLimit; thirdDigit += 2)
                        {
                            Console.WriteLine($"{firstDigit} {secondDigit} {thirdDigit}");
                        }
                    }
                }
            }
        }

        static bool IsPrime(int number)
        {
            if (number < 2)
                return false;

            for (int i = 2; i <= Math.Sqrt(number); i++)
            {
                if (number % i == 0)
                    return false;
            }

            return true;
        }
    }
}