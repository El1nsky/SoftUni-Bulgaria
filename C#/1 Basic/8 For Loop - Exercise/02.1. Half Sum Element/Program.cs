using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter the number of integers: ");
        int n = Convert.ToInt32(Console.ReadLine());

        int[] numbers = new int[n]; // Create an array to store the integers

        Console.WriteLine("Enter the integers:");

        // Read each integer from the user and store it in the numbers array
        for (int i = 0; i < n; i++)
        {
            numbers[i] = Convert.ToInt32(Console.ReadLine());
        }

        int sum = 0; // Initialize sum variable to hold the sum of the numbers
        int maxNumber = int.MinValue; // Initialize maxNumber variable to hold the largest number

        // Iterate over the numbers array to calculate the sum and find the maximum number
        foreach (int number in numbers)
        {
            sum += number; // Add each number to the sum

            // Check if the current number is larger than the previous maximum number
            if (number > maxNumber)
            {
                maxNumber = number; // Update the maximum number if necessary
            }
        }

        // Calculate the difference between the largest number and the sum of the others
        int diff = Math.Abs(maxNumber - (sum - maxNumber));

        bool hasEqualNumber = false; // Initialize a flag to track if an equal number is found

        // Iterate over the numbers array to check if there is a number equal to the sum of others
        foreach (int number in numbers)
        {
            if (number == sum - number) // Check if the current number is equal to the sum minus itself
            {
                hasEqualNumber = true; // Set the flag to indicate an equal number is found
                Console.WriteLine("Yes");
                Console.WriteLine("Sum = " + number);
                break; // Exit the loop since we found an equal number
            }
        }

        // If no equal number is found, print "No" and the difference between the largest number and the sum
        if (!hasEqualNumber)
        {
            Console.WriteLine("No");
            Console.WriteLine("Diff = " + diff);
        }
    }
}
