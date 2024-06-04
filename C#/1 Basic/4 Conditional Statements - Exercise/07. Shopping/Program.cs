using System;

namespace Shopping
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double budged = Convert.ToDouble(Console.ReadLine());
            Int16 gpu_amount = Convert.ToInt16(Console.ReadLine());
            Int16 cpu_amount = Convert.ToInt16(Console.ReadLine());
            Int16 ram_amount = Convert.ToInt16(Console.ReadLine());

            double gpu_price = 250 * gpu_amount;
            double cpu_price = (gpu_price * 0.35) * cpu_amount;
            double ram_price = (gpu_price * 0.10) * ram_amount;

            double total_sum = gpu_price + cpu_price + ram_price;

            if (gpu_amount > cpu_amount)
            {
                total_sum -= total_sum * 0.15;
            }

            if (total_sum <= budged)
            {
                Console.WriteLine($"You have {budged - total_sum:F2} leva left!");
            }

            else
            {
                Console.WriteLine($"Not enough money! You need {Math.Abs(total_sum - budged):F2} leva more!");
            }
        }
    }
}