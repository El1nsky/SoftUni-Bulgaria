using System;

namespace _04._Walking
{
    internal class Program
    {
        static void Main(string[] args)
        {
            const short goalSteps = 10000;
            short totalSteps = 0;

            while (totalSteps < goalSteps)
            {
                //Console.Write("Enter the number of steps: ");
                string input = Console.ReadLine();

                if (input.ToLower() == "going home")
                {
                    //Console.Write("\nEnter the steps taken on the way home: ");
                    short stepsOnWayHome = Convert.ToInt16(Console.ReadLine());
                    totalSteps += stepsOnWayHome;
                    break;
                }

                short steps = Convert.ToInt16(input);
                totalSteps += steps;
            }

            if (totalSteps >= goalSteps)
            {
                short difference = (short)(totalSteps - goalSteps);
                Console.WriteLine("Goal reached! Good job!");
                if (difference > 0)
                {
                    Console.WriteLine($"{difference} steps over the goal!");
                }
            }
            else
            {
                short difference = (short)(goalSteps - totalSteps);
                Console.WriteLine($"{difference} more steps to reach goal.");
            }
            //Console.ReadKey();
        }
    }
}