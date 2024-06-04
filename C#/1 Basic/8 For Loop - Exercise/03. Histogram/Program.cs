using System;

class Program
{
    static void Main()
    {
        int n = Convert.ToInt32(Console.ReadLine());

        int countBelow200 = 0;
        int count200to399 = 0;
        int count400to599 = 0;
        int count600to799 = 0;
        int count800andAbove = 0;

        for (int i = 0; i < n; i++)
        {
            Console.Write("", i + 1);
            int number = Convert.ToInt32(Console.ReadLine());

            if (number < 200)
            {
                countBelow200++;
            }
            else if (number >= 200 && number <= 399)
            {
                count200to399++;
            }
            else if (number >= 400 && number <= 599)
            {
                count400to599++;
            }
            else if (number >= 600 && number <= 799)
            {
                count600to799++;
            }
            else
            {
                count800andAbove++;
            }
        }

        double p1 = Math.Round((double)countBelow200 / n * 100, 2);
        double p2 = Math.Round((double)count200to399 / n * 100, 2);
        double p3 = Math.Round((double)count400to599 / n * 100, 2);
        double p4 = Math.Round((double)count600to799 / n * 100, 2);
        double p5 = Math.Round((double)count800andAbove / n * 100, 2);

        Console.WriteLine($"{p1:F2}%");
        Console.WriteLine($"{p2:F2}%");
        Console.WriteLine($"{p3:F2}%");
        Console.WriteLine($"{p4:F2}%");
        Console.WriteLine($"{p5:F2}%");
    }
}
