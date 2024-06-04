using System;

namespace _05._Salary
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int number_of_tabs = Convert.ToInt32(Console.ReadLine());
            int salary = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < number_of_tabs; i++)
            {
                string website_name = Console.ReadLine();

                switch (website_name)
                {
                    case "Facebook":
                        salary -= 150;
                        break;
                    case "Instagram":
                        salary -= 100;
                        break;
                    case "Reddit":
                        salary -= 50;
                        break;
                }

                if (salary <= 0)
                {
                    Console.WriteLine("You have lost your salary.");
                    return;
                }
            }

            Console.WriteLine(salary);

        }
    }
}