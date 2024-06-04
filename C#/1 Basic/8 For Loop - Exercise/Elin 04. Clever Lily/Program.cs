using System;

namespace Elin_04._Clever_Lily
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter age: ");
            short age = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Enter washing machine price: ");
            double washingMachinePrice = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter toys price: ");
            short toyPrice = Convert.ToInt16(Console.ReadLine());

            double savings = 0;
            short toys = 0;

            for (short currentAge = 1; currentAge <= age; currentAge++)
            {
                if (currentAge % 2 == 0)
                {
                    savings += (currentAge / 2) * 10 - 1;
                }
                else
                {
                    toys++;
                }
            }

            double totalMoneyForToys = toys * toyPrice;
            savings += totalMoneyForToys;

            if (savings >= washingMachinePrice)
            {
                Console.WriteLine($"Yes! {savings - washingMachinePrice:F2} BGN left.");
            }
            else
            {
                Console.WriteLine($"No! {Math.Abs(savings - washingMachinePrice):F2} BGN more needed!");
            }

            Console.ReadKey();
        }
    }
}