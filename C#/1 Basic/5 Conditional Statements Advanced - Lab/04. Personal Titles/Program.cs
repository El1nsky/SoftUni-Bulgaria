using System;
using System.ComponentModel.Design;

namespace Personal_Titles
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double age = Convert.ToDouble(Console.ReadLine());
            string sex = Console.ReadLine();
            if (sex == "f")
            {
                if (age >= 16)
                {
                    Console.WriteLine("Ms.");
                }
                else
                {
                    Console.WriteLine("Miss");
                }
            }
            else
            {
                if (age >= 16)
                {
                    Console.WriteLine("Mr.");
                }
                else
                {
                    Console.WriteLine("Master");
                }
            }

        }
    }
}