using System;

class Program
{
    static void Main()
    {
        const int baseCampHeight = 5364;
        const int summitHeight = 8848;
        const int maxDays = 5;

        int currentHeight = baseCampHeight;
        int days = 0;

        while (currentHeight < summitHeight && days < maxDays)
        {
            string willRest = Console.ReadLine();
            if (willRest.ToLower() == "yes")
            {
                int metersClimbed = int.Parse(Console.ReadLine());
                currentHeight += metersClimbed;
                days++;
            }
            else if (willRest.ToLower() == "no")
            {
                int metersClimbed = int.Parse(Console.ReadLine());
                currentHeight += metersClimbed;
                days++;
            }
        }

        if (currentHeight >= summitHeight)
        {
            Console.WriteLine($"Goal reached for {days} days!");
        }
        else if (days >= maxDays)
        {
            Console.WriteLine("Failed!");
        }

        Console.WriteLine(currentHeight);
    }
}
