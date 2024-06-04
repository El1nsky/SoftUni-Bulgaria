using System;

namespace Yard_Greening
{
    class Program
    {
        static void Main(string[] args)
        {
            double price = double.Parse(Console.ReadLine());
            double quad_meter = 7.61;
            double discount = 0.18;
            double greening = price * quad_meter;
            double greening_discount = discount * greening;
            double result = greening - greening_discount;

            Console.WriteLine($"The final price is: {result} lv.");
            Console.WriteLine($"The discount is: {greening_discount} lv.");



        }
    }
}