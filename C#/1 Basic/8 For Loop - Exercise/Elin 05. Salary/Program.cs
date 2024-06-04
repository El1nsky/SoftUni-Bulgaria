namespace Elin_05._Salary
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter amount of tabs opened: ");
            short tabsOpened = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("Enter your salary: ");
            double salary = Convert.ToDouble(Console.ReadLine());

            for (short i = 0; i < tabsOpened; i++)
            {
                Console.WriteLine("Enter website: ");
                string websitesOpened = Console.ReadLine();

                switch (websitesOpened)
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
            }

            if (salary <= 0)
            {
                Console.WriteLine("You have lost your salary.");
            }
            else
            {
                Console.WriteLine(salary);
            }
            Console.ReadKey();
        }
    }
}