using System;

namespace Vacation_Books_List
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Enter number of pages: ");
            int numberOfPages = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter number of pages read for one hour: ");
            int pagesReadForOneHour = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter days: ");
            int days = Convert.ToInt32(Console.ReadLine());
            int totalTimeNeededForReading = numberOfPages / pagesReadForOneHour / days;

            Console.WriteLine("Needed hours for one day: " + totalTimeNeededForReading);
        }
    }
}