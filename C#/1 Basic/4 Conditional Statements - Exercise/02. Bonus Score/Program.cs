﻿namespace Bonus_Score
{
    class Program
    {
        static void Main(string[] args)
        {
            short number = Convert.ToInt16(Console.ReadLine());

            float bonus = 0.0F;

            if (number <= 100) { bonus = 5; }

            else if (number > 1000) { bonus = number * 0.1; }

            else { bonus = number * 0.2; }

            if (number % 2 == 0) { bonus++; }

            else if (number % 10 == 5) { bonus += 2; }

            Console.Write(${ bonus}\n{ number + bonus});
        }
    }
}