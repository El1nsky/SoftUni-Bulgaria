using System;
using System.ComponentModel.Design;

namespace _03._Vacation
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.Write("Money needed for excursion: ");
            float budgedNeeded = Convert.ToSingle(Console.ReadLine());

            //Console.Write("\nYour budged: ");
            float currentBudged = Convert.ToSingle(Console.ReadLine());

            short counter = 0;
            short counterSpend = 0;

            while (true)
            {
                counter++;

                //Console.Write("\nSave or spend: ");
                string spendSave = Console.ReadLine();

                //Console.Write("\nHow much would you spend / save? ");
                float action = Convert.ToSingle(Console.ReadLine());

                

                if (spendSave == "save")
                {
                    currentBudged += action;
                    counterSpend = 0;
                }
                else
                {
                    counterSpend++;
                    currentBudged -= action;

                    if (currentBudged < 0)
                    {

                        currentBudged = 0;
                    }
                }
                if (counterSpend == 5)
                {
                    Console.Write($"You can't save the money.\n{counter}");
                    break;
                }
                if (currentBudged >= budgedNeeded)
                {
                    Console.WriteLine($"You saved the money for {counter} days.");
                    break;
                }
            }

            //Console.ReadKey();
        }
    }
}