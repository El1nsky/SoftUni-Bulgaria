using System;

namespace _01._Old_Books
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.Write("What book are you looking for: ");
            string bookLookingFor = Console.ReadLine();
            short counter = -1;


            while (true)
            {
                //Console.Write("\nEnter title to search: ");
                string bookSearch = Console.ReadLine();
                counter++;
                if (bookLookingFor == bookSearch)
                {
                    Console.WriteLine($"You checked {counter} books and found it.");
                    break;
                }
                else if (bookSearch == "No More Books")
                {
                    Console.WriteLine($"The book you search is not here!\nYou checked {counter} books.");
                    break;
                }
            }

            //Console.ReadKey();
        }
    }
}