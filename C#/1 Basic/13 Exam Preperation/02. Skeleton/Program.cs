using System;
using System.Runtime.InteropServices;

namespace _02._Skeleton
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.Write("Enter how many minutes: ");
            short minutes = Convert.ToInt16(Console.ReadLine());

            //Console.Write("Enter how many seconds: ");
            short seconds = Convert.ToInt16(Console.ReadLine());

            //Console.Write("Enter furrow lenght: ");
            float furrowLenght = Convert.ToSingle(Console.ReadLine());

            //Console.Write("Seconds for 100m passed: ");
            short secondsPer100M = Convert.ToInt16(Console.ReadLine());

            float totalSeconds = minutes * 60.00F + seconds;
            float timeReduction = furrowLenght / 120.00F * 2.50F;
            float playerTime = (furrowLenght / 100.00F) * secondsPer100M - timeReduction;

            if (playerTime <= totalSeconds)
            {
                Console.Write($"Marin Bangiev won an Olympic quota!\nHis time is {playerTime:F3}.");
            }
            else
            {
                Console.Write($"No, Marin failed! He was {playerTime - totalSeconds:F3} second slower.");
            }

            //Console.ReadKey(); 
        }
    }
}