using System;

namespace test
{
    class Program
    {
        // Merge two sorted array using FOR
        public static void mergeArrays(int[] arr1, int[] arr2,
                                       int n1, int n2, int[] arr3)
        {
            int i = 0, j = 0, k = 0;
            for (int p = 0; (i < n1 && j < n2); p++)
            {
                if (arr1[i] < arr2[j])
                    arr3[k++] = arr1[i++];
                else
                    arr3[k++] = arr2[j++];
            }

            for (int p = 0; (i < n1); p++)
            {
                arr3[k++] = arr1[i++];
            }

            for (int p = 0; (j < n2); p++)
            {
                arr3[k++] = arr2[j++];
            }
        }
        static void Main(string[] args)
        {

            int[] arr1 = { 1, 3, 5, 7 };
            int n1 = arr1.Length;
            Console.Write("First Array: ");
            for (int i = 0; i < n1; i++)
            {
                Console.Write(arr1[i] + " ");
            }
            Console.Write("\n");


            int[] arr2 = { 2, 4, 6, 8, };
            int n2 = arr2.Length;
            Console.Write("Second Array: ");
            for (int i = 0; i < n2; i++)
            {
                Console.Write(arr2[i] + " ");
            }
            Console.Write("\n");

            int[] arr3 = new int[n1 + n2];
            mergeArrays(arr1, arr2, n1, n2, arr3);

            Console.Write("Array after merging: ");
            for (int i = 0; i < n1 + n2; i++)
            {
                Console.Write(arr3[i] + " ");
            }

            Console.ReadKey();
        }
    }
}
