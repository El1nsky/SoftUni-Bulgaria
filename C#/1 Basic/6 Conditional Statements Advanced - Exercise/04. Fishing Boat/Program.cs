using System;

namespace ski
{
    class Program
    {
        static void Main(string[] args)
        {

            int budget = int.Parse(Console.ReadLine());
            string typeOfSeason = Console.ReadLine();
            int numberOfFishermans = int.Parse(Console.ReadLine());

            int shipRentSpring = 3000;
            int shipRentSummer = 4200;
            int shipRentAutumn = 4200;
            int shipRentWinter = 2600;
            double sumForRent = 0;


            if (typeOfSeason == "Spring")
            {
                if (numberOfFishermans <= 6)
                {
                    sumForRent = shipRentSpring * 0.90;
                }
                else if (numberOfFishermans >= 7 && numberOfFishermans <= 11)
                {
                    sumForRent = shipRentSpring * 0.85;
                }
                else if (numberOfFishermans >= 12)
                {
                    sumForRent = shipRentSpring * 0.75;
                }

            }
            else if (typeOfSeason == "Summer")
            {
                if (numberOfFishermans <= 6)
                {
                    sumForRent = shipRentSummer * 0.90;
                }
                else if (numberOfFishermans >= 7 && numberOfFishermans <= 11)
                {
                    sumForRent = shipRentSummer * 0.85;
                }
                else if (numberOfFishermans >= 12)
                {
                    sumForRent = shipRentSummer * 0.75;
                }
            }
            else if (typeOfSeason == "Autumn")
            {
                if (numberOfFishermans <= 6)
                {
                    sumForRent = shipRentAutumn * 0.90;
                }
                else if (numberOfFishermans >= 7 && numberOfFishermans <= 11)
                {
                    sumForRent = shipRentAutumn * 0.85;
                }
                else if (numberOfFishermans >= 12)
                {
                    sumForRent = shipRentAutumn * 0.75;
                }
            }
            else if (typeOfSeason == "Winter")
            {
                if (numberOfFishermans <= 6)
                {
                    sumForRent = shipRentWinter * 0.90;
                }
                else if (numberOfFishermans >= 7 && numberOfFishermans <= 11)
                {
                    sumForRent = shipRentWinter * 0.85;
                }
                else if (numberOfFishermans >= 12)
                {
                    sumForRent = shipRentWinter * 0.75;
                }

                //if (budget >= sumForRent)
                //{
                //    Console.WriteLine($"Yes! You have {(budget - sumForRent):F2}leva left.");
                //}
                //else if (budget < sumForRent)
                //{
                //    Console.WriteLine($"Not enough money! You need {(sumForRent - budget):F2} leva.");
                //}
            }

            if (numberOfFishermans % 2 == 0 && typeOfSeason != "Autumn")
            {
                sumForRent *= .95;
            }

            if (budget >= sumForRent)
            {
                Console.WriteLine($"Yes! You have {(budget - sumForRent):F2} leva left.");
            }
            else if (budget < sumForRent)
            {
                Console.WriteLine($"Not enough money! You need {(sumForRent - budget):F2} leva.");
            }
        }
    }
}