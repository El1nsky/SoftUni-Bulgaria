using System;

namespace _06._Vowels_Sum
{
    class Program
    {
        static void Main(string[] args)
        {
            String text = Console.ReadLine();
            Int16 vowel_sum = 0;

            for (Int16 i = 0; i < text.Length; i++)
            {
                if (text[i] == 'a' || text[i] == 'A')
                {
                    vowel_sum += 1;
                }
                else if (text[i] == 'e' || text[i] == 'E')
                {
                    vowel_sum += 2;
                }
                else if (text[i] == 'i' || text[i] == 'I')
                {
                    vowel_sum += 3;
                }
                else if (text[i] == 'o' || text[i] == 'O')
                {
                    vowel_sum += 4;
                }
                else if (text[i] == 'u' || text[i] == 'U')
                {
                    vowel_sum += 5;
                }
            }
            Console.WriteLine(vowel_sum);
        }
    }
}