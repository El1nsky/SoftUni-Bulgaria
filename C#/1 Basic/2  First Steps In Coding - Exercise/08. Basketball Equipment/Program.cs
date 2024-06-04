using System;
using System.Runtime.CompilerServices;

namespace Basketball_Equipment
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Basketball annual training tax: ");
            int basketball_annual_training_tax = Convert.ToInt32(Console.ReadLine());

            double sneakers_price = basketball_annual_training_tax * 0.60;
            double basketball_outfit_price = sneakers_price * 0.80;
            double basketball_ball_price = basketball_outfit_price / 4;
            double basketball_accessories_price = basketball_ball_price / 5;


            Console.WriteLine("Total money needed to start training baskeball: ");
            Console.WriteLine(basketball_annual_training_tax + sneakers_price + basketball_outfit_price + basketball_ball_price + basketball_accessories_price);

            //THIS PROGRAM DOES NOT MAKE ANY SENSE FOR INTPUT USER!!!
        }
    }
}