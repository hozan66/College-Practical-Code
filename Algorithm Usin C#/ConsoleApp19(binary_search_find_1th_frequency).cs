using System;

namespace ConsoleApp19
{
    class Program
    {
        public static int RecursiveBinarySearch(int[] arr, int start, int end, int key)
        {
            int mid = Convert.ToInt32((start + end) / 2);
            if (end < start)
            {
                return -1;
            }

            if (arr[mid] == key)
            {
                if (mid>0 && arr[mid] != arr[mid-1]) {
                    return mid;
                }
                else
                {
                    if (mid > 0)
                    {
                        return RecursiveBinarySearch(arr, start, mid - 1, key);
                    }
                    else
                    {
                        return mid;
                    }
                }

            }
            else if (key < arr[mid])
            {
                return RecursiveBinarySearch(arr, start, mid - 1, key);
            }
            else
            {
                return RecursiveBinarySearch(arr, mid + 1, end, key);
            }
        }
        static void Main(string[] args)
        {
            // Finding first element frequency by using binary search 
            // Array must be sorted!
            // findind the first occurency
            int[] arr = { 2, 3, 4, 4, 4, 4, 4, 4, 8, 9, 9, 15, 15, 19, 20, 20, 20, 25 };
            int n = arr.Length;

            int end = arr.Length - 1;
            int start = 0;

            Console.Write("Sorted Array is: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine("\n");

            Console.Write("Enter value of Key to search: ");
            int key = Convert.ToInt32(Console.ReadLine());

            //RecursiveBinarySearch
            Console.WriteLine("Binary Search Using Recursive: ");
            int index = RecursiveBinarySearch(arr, start, end, key);
            if (index == -1)
            {
                Console.WriteLine("The Element " + key + " is NOT Found");
            }
            else
            {
                Console.WriteLine("The Element: " + key + " is Found");
                Console.WriteLine("Index of The Key: " + index);
            }

            Console.ReadKey();
        }
    }
}
