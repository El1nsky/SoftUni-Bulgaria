using System;

namespace Fish_Tank
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("*************************************************************");
            Console.WriteLine("Volume measuring program");
            Console.WriteLine("Enter lenght in cm: ");
            int aqua_lenght = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter width in cm: ");
            int aqua_width = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter height in cm:");
            int aqua_height = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter percentage of space taken: ");
            double percentage = Convert.ToDouble(Console.ReadLine());

            int aqua_volume = (aqua_lenght * aqua_width * aqua_height);
            double volume_in_liters = aqua_volume / 1000.00;
            double space_taken = percentage / 100;
            double result = volume_in_liters * (1 - space_taken);


            Console.WriteLine($" You will need {result} liters of fluid to fill this space!");
            Console.WriteLine("*************************************************************");
        }
    }
}