using System;

namespace Deposit_Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            double depositet_amount = double.Parse(Console.ReadLine());
            int deposit_period_in_months = int.Parse(Console.ReadLine());
            double yearly_interest_percentage = double.Parse(Console.ReadLine());

            double yearly_accumulated_interest = depositet_amount * yearly_interest_percentage / 100;
            double interest_for_one_month = yearly_accumulated_interest / 12;
            double total_sum = depositet_amount + deposit_period_in_months * interest_for_one_month;
            Console.WriteLine(total_sum);
        }
    }
}