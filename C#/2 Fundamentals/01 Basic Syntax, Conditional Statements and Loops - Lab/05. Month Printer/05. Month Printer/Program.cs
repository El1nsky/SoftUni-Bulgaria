using System;
using System.Reflection.Metadata;

class MonthPrinter
{
    static void Main(string[] args)
    {
        short input = Convert.ToInt16(Console.ReadLine());

        switch (input)
        {
            case 1:Console.Write("January"); break;
            case 2: Console.Write("February"); break;
            case 3: Console.Write("March"); break;
            case 4: Console.Write("April"); break;
            case 5: Console.Write("May"); break;
            case 6: Console.Write("June"); break;
            case 7: Console.Write("July"); break;
            case 8: Console.Write("Agust"); break;
            case 9: Console.Write("September"); break;
            case 10: Console.Write("October"); break;
            case 11: Console.Write("November"); break;
            case 12: Console.Write("December"); break;
            default: Console.Write("Error!"); break;
        }
    }
}