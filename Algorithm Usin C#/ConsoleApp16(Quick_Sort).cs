using System;

namespace ConsoleApp16
{
    class Program
    {
        static public int Partition(int[] arr, int start, int end)
        {
            int pivot;
            pivot = arr[start];
            while (true)
            {
                while (arr[start] < pivot)
                {
                    start++;
                }
                while (arr[end] > pivot)
                {
                    end--;
                }
                if (start < end)
                {
                    int temp = arr[end];
                    arr[end] = arr[start];
                    arr[start] = temp;
                }
                else
                {
                    return end;
                }
            }
        }

        static public void quickSort(int[] arr, int start, int end)
        {
            int pivot;
            if (start < end)
            {
                pivot = Partition(arr, start, end);
                if (pivot > 1)
                {
                    quickSort(arr, start, pivot - 1);
                }
                if (pivot + 1 < end)
                {
                    quickSort(arr, pivot + 1, end);
                }
            }
        }

        static void Main(string[] args)
        {
            int[] arr = { 67, 12, 95, 56, 85, 1, 100, 23, 60, 9 };
            int n = arr.Length;
            Console.WriteLine("Quick Sort");
            Console.Write("Unsorted Array is: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine("\n");

            quickSort(arr, 0, n-1);
            Console.Write("\nSorted Array is:   ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine("\n");

            Console.ReadKey();
        }
    }
}
