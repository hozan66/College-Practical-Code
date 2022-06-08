using System;
    class Program
    {
        static void Main()
        {
            Console.Write("Enter first name: ");
            string firstName = Console.ReadLine();

            Console.Write("Enter last name: ");
            string lastName = Console.ReadLine();

            Console.WriteLine("welcome back " +firstName+" "+lastName);
            Console.WriteLine("Your Account is active Mr: {0} {1}",firstName,lastName);

            Console.ReadKey(true);
        }
    }
/*
Enter first name: Hozan
Enter last name: Farho
welcome back Hozan Farho
Your Account is active Mr: Hozan Farho

*/