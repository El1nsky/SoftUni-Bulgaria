using System;

namespace Password_Guess
{
    class Program
    {
        static void Main(string[] args)
        {
            String password = Console.ReadLine();
            String password_phrase = "s3cr3t!P@ssw0rd";



            if (password == password_phrase)
            {
                Console.WriteLine("Welcome");
            }
            else
            {
                Console.WriteLine("Wrong password!");
            }
        }
    }
}