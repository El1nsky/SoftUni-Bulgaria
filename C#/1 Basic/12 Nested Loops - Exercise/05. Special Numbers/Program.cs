using System;

namespace _05._Special_Numbers
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());

            for (int num = 1111; num <= 9999; num++)
            {
                int currentNum = num;
                bool isSpecial = true;

                while (currentNum > 0)
                {
                    int digit = currentNum % 10;
                    currentNum /= 10;

                    if (digit == 0 || n % digit != 0)
                    {
                        isSpecial = false;
                        break;
                    }
                }

                if (isSpecial)
                {
                    Console.Write(num + " ");
                }
            }
        }
    }
}