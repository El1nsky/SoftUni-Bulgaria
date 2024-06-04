using System;
using System.Linq;
class Program
{
    static void Main(string[] args)
    {
        Int16 n = Convert.ToInt16(Console.ReadLine());
        Int32[] num = new Int32[n];

        for (Int16 i = 0; i < n; i++)
        {
            num[i] = Convert.ToInt32(Console.ReadLine());
        }
        Console.WriteLine($"Max number: {num.Max()}");
        Console.WriteLine($"Min number: {num.Min()}");
    }
}