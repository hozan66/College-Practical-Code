using System;

namespace ConsoleApp18_Binary_search_
{
    class Program
    {
        public static int RecursiveBinarySearch(int[] arr, int start, int end, int key)
        {
            int mid = Convert.ToInt32((start+end) / 2);
            if (end < start)
            {
                return -1;
            }

            if (arr[mid] == key)
            {
                return mid;
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
            // Binary Search
            // Array must be sorted!
            ////int[] arr = { 2, 4, 8, 9, 11, 12, 15, 19, 20, 25 };
            int[] arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
            int n = arr.Length;

            int end = arr.Length-1;
            int start = 0;
            bool flag = false;

            Console.Write("Sorted Array is: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine("\n");

            Console.Write("Enter value of Key to search: ");
            int key = Convert.ToInt32(Console.ReadLine());

            while(start<=end)
            {
                int mid = Convert.ToInt32((end + start) / 2);
                if (key == arr[mid])
                {
                    flag = true;
                    break;
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

            if (flag == true)
            {
                Console.WriteLine("The Element: " + key + " is Found");
            }
            else { 
                Console.WriteLine("The Element " + key + " is NOT Found");
            }

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
            }

            Console.ReadKey();
        }
    }
}
