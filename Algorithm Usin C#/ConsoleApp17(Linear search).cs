using System;

namespace ConsoleApp17
{
    class Program
    {
        static void Main(string[] args)
        {
            // Linear search
            int[] arr = { 67, 12, 95, 56, 85, 1, 100, 23, 60, 9 };
            int n = arr.Length;
            Console.Write("Unsorted Array is: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine("\n");

            bool flag = false;
            Console.Write("Enter value of Key: ");
            int key = Convert.ToInt32(Console.ReadLine());
            // Normal search
            for (int i = 0; i < n; i++)
            {
                if (key == arr[i])
                {
                    flag = true;
                    break;
                }
            }

            if(flag==true)
                Console.WriteLine("Element is Found\n");
            else
                Console.WriteLine("Element is NOT Found\n");

            Console.ReadKey();
        }
    }
}
