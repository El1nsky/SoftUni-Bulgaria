using System;

namespace _05._Account_Balance 
{
    class Program
    {
        static void Main(string[] args)
        {
            decimal totalAmount = 0;

            while (true)
            {
                string input = Console.ReadLine();

                if (input == "NoMoreMoney")
                    break;

                decimal amount;
                try
                {
                    amount = Convert.ToDecimal(input);
                }
                catch (FormatException)
                {
                    Console.WriteLine("Invalid operation!");
                    return;
                }

                if (amount < 0)
                {
                    Console.WriteLine($"Invalid operation!\n Total: {totalAmount:F2}");

                    return;
                }

                Console.WriteLine($"Increase: {amount:F2}");
                totalAmount += amount;
            }

            Console.WriteLine("Total: " + totalAmount.ToString("F2"));

            //Console.ReadKey();
        }
    }
}

