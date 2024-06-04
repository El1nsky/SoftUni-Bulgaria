using System;

namespace _05._Character_Sequence
{
    internal class Program
    {
        static void Main(string[] args)
        {
            String text = Console.ReadLine();

            for (int i = 0; i < text.Length; i +=1) 
            {
                char letter = text[i];

                Console.WriteLine(letter);
            }
        }
    }
}