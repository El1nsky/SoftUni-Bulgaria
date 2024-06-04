using System;

namespace Area_of_Figures
{
    internal class Program
    {
        static void Main(string[] args)
        {
            String geo_figure = Console.ReadLine();

            if (geo_figure == "square")
            {
                double square_side = Convert.ToDouble(Console.ReadLine());

                Console.WriteLine("{0:F3}", square_side * square_side);
            }
            if (geo_figure == "rectangle")
            {
                double side_a = Convert.ToDouble(Console.ReadLine());
                double side_b = Convert.ToDouble(Console.ReadLine());

                Console.WriteLine("{0:F3}", side_a * side_b);
            }
            if (geo_figure == "circle")
            {
                double radius = Convert.ToDouble(Console.ReadLine());
                double area = Math.PI * Math.Pow(radius, 2);

                Console.WriteLine("{0:F3}", area);
            }
            if (geo_figure == "triangle")
            {
                double a = Convert.ToDouble(Console.ReadLine());
                double b = Convert.ToDouble(Console.ReadLine());
                double area = (a * b) / 2;

                Console.WriteLine("{0:F3}", area);
            }
        }
    }
}