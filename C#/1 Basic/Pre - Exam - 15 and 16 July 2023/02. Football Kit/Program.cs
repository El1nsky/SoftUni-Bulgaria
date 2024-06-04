using System;

namespace _02._Football_Kit
{
    internal class Program
    {
        static void Main()
        {
            //Console.Write("Enter shirt's price: ");
            float tShirtPrice = Convert.ToSingle(Console.ReadLine());

            //Console.Write("Sum target: ");
            float targetSum = Convert.ToSingle(Console.ReadLine());

            float shortsPrice = tShirtPrice * 0.75F;
            float socksPrice = shortsPrice * 0.2F;
            float sneakersPrice = (tShirtPrice + shortsPrice) * 2;

            float totalPrice = tShirtPrice + shortsPrice + socksPrice + sneakersPrice;
            float discount = totalPrice * 0.15F;
            totalPrice -= discount;

            if (totalPrice >= targetSum)
            {
                Console.WriteLine("Yes, he will earn the world-cup replica ball!");
                Console.WriteLine($"His sum is {totalPrice:F2} lv.");
            }
            else
            {
                float neededMoney = targetSum - totalPrice;
                Console.WriteLine("No, he will not earn the world-cup replica ball.");
                Console.WriteLine($"He needs {neededMoney:F2} lv. more.");
            }

            //Console.ReadKey(); 
        }
    }
}