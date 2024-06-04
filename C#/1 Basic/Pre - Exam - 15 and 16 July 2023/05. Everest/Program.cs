using System;

namespace _05._Everest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int startHeight = 5364;
            int target = 8848;
            int currentHeight = 0;
            int count = 1;

            while (true)
            {
                string yesOrNo = Console.ReadLine();
                if (yesOrNo == "END")
                {
                    break;
                }

                if (yesOrNo == "Yes")
                {
                    count++;
                }

                int height = int.Parse(Console.ReadLine());
                currentHeight += height;

                if (currentHeight + startHeight >= target)
                {
                    break;
                }

                if (count == 5)
                {
                    break;
                }
            }

            if (startHeight + currentHeight < target)
            {
                Console.WriteLine("Failed!");
                Console.WriteLine(startHeight + currentHeight);
            }
            else
            {
                Console.WriteLine($"Goal reached for {count} days!");
            }

            //Console.ReadLine();
        }
    }
}