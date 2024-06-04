using System;

class BackIn30Minutes
{
    static void Main(string[] args)
    {
        ushort currentHour, currentMinute;

        currentHour = Convert.ToUInt16(Console.ReadLine());
        currentMinute =Convert.ToUInt16(Console.ReadLine());

        int newMinute = currentMinute + 30;

        if (newMinute >= 60)
        {
            currentHour++;
            newMinute %= 60; 
        }

        currentHour %= 24;

        string formattedTime = $"{currentHour:D1}:{newMinute:D2}";

        Console.Write(formattedTime);
    }
}