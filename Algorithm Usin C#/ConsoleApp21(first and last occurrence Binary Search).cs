using System;

namespace ConsoleApp21
{
    class Program
    {
        static public int first_occurrence(int[] arr, int n, int key)
        {
            int start = 0;
            int end = n - 1;
            int result = -1;
            while (start <= end)
            {

                int mid = Convert.ToInt32((start + end) / 2);
                if (key == arr[mid])
                {
                    result = mid;
                    end = mid - 1;
                }
                else if (key > arr[mid])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
            return result;
        }

        static public int last_occurrence(int[] arr, int n, int key)
        {
            int start = 0;
            int end = n - 1;
            int result = -1;
            while(start<=end)
            {

                int mid = Convert.ToInt32((start + end) / 2);
                if (key == arr[mid])
                {
                    result = mid;
                    start = mid + 1;
                }
                else if (key > arr[mid])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
            return result;
        }

        static void Main(string[] args)
        {
            // findind the first and last occurency
            // Binary Search
            // Array must be sorted!
            int[] arr = { 2, 4, 9, 9, 9, 12, 15, 15, 20, 25 };
            int n = arr.Length;

            Console.Write("Sorted Array is: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine("\n");

            Console.Write("Enter value of Key to search: ");
            int key = Convert.ToInt32(Console.ReadLine());

            int first = first_occurrence(arr, n, key);
            if (first != -1)
            {
                Console.WriteLine("The First index: " + first + " is Found");
            }
            else
            {
                Console.WriteLine("The Element is NOT Found");
            }
            Console.WriteLine("==================================================");
            int last = last_occurrence(arr, n, key);
            if (last != -1)
            {
                Console.WriteLine("The Last index: " + last + " is Found");
            }
            else
            {
                Console.WriteLine("The Element is NOT Found");
            }

            Console.ReadKey();
        }
    }
}
