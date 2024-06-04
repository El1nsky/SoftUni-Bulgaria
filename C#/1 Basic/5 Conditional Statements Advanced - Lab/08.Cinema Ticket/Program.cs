using System;

namespace Cinema_Ticket
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string day = Console.ReadLine();
            Int16[] tickets_price = { 12, 14, 16 };

            switch (day)
            {
                case "Monday":
                    Console.WriteLine(tickets_price[0]);
                    break;
                case "Tuesday":
                    Console.WriteLine(tickets_price[0]);
                    break;
                case "Wednesday":
                    Console.WriteLine(tickets_price[1]);
                    break;
                case "Thursday":
                    Console.WriteLine(tickets_price[1]);
                    break;
                case "Friday":
                    Console.WriteLine(tickets_price[0]);
                    break;
                case "Saturday":
                    Console.WriteLine(tickets_price[2]);
                    break;
                case "Sunday":
                    Console.WriteLine(tickets_price[2]);
                    break;
            }
        }
    }
}