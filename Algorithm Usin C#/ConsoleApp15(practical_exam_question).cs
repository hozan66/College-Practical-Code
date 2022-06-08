using System;

namespace ConsoleApp1
{
    class SortArray {
        public int[] arr = { 8, 7, 6, 9, 10, 3, 16, 15, 4, 1 };
        public static int[] arr1 = { 300, 320, 340, 360, 380, 400, 420, 440, 480, 500 };
        public static int[] arr2 = { 610, 620, 630, 640, 650, 660, 670, 680, 690, 700 };
        public bool flag = true;
        public int siz1 = arr1.Length;
        public int siz2 = arr2.Length;
        

        public void insertion_sort() {
            int temp;
            Console.Write("Unsorted Array: ");
            for (int i = 0; i < arr.Length; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine();

            for (int i = 0; i < arr.Length; i += 2)
            {
                if (arr[i] % 2 != 0 || arr[i + 1] % 2 == 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag == true)
            {
                for (int i = 0; i < arr.Length - 1; i++)
                {
                    for (int j = i + 1; j > 0; j--)
                    {
                        if (arr[j - 1] > arr[j])
                        {
                            temp = arr[j - 1];
                            arr[j - 1] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }

                Console.Write("Sorted Array: ");
                for (int i = 0; i < arr.Length; i++)
                {
                    Console.Write(arr[i] + " ");
                }
                Console.WriteLine();
            }
            else
            {
                Console.WriteLine("Array has Not even and odd numbers (respectively)");
            }
        }
        public void merge_sort() {
            int siz3 = siz1 + siz2;
            int[] arr3 = new int[siz3];

            Console.Write("First Array: ");
            for (int p = 0; p < siz1; p++)
            {
                Console.Write(arr1[p] + " ");
            }
            Console.Write("\n");

            Console.Write("Second Array: ");
            for (int p = 0; p < siz2; p++)
            {
                Console.Write(arr2[p] + " ");
            }
            Console.Write("\n");

            int i = 0, j = 0, k = 0;
            while (i < siz1 && j < siz2)
            {
                if (arr1[i] < arr2[j])
                    arr3[k++] = arr1[i++];
                else
                    arr3[k++] = arr2[j++];
            }

            while (i < siz1)
                arr3[k++] = arr1[i++];

            while (j < siz2)
                arr3[k++] = arr2[j++];

            Console.Write("Array after Merge sort: ");
            for (int p = 0; p < siz3; p++)
            {
                Console.Write(arr3[p] + " ");
            }
        }

    }

    class Program
    {
        static void Main(string[] args)
        {
            //Q) Write program to sort an array by using two class
            // 1-Using function if an array has even and odd number (respectively) from start to end then using insertion sort.
            // 2-Using function if arrays have randomly number from (300, 500) and (600, 700) number
            // from start to end then using merge sort, when two arrays the same size.
            // 3-Show which algorithm is better? And why?

            SortArray ob = new SortArray();
            ob.insertion_sort();
            Console.WriteLine("\n");
            ob.merge_sort();
            Console.WriteLine("\n");
            Console.WriteLine("Merge sort is better than Insertion sort because it has less time complexity");
        }
    }
}
