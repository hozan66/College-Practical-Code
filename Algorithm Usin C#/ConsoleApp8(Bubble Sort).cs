using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp8
{
    class Program
    {
        static void Main(string[] args)
        {
            // Bubble Sorting
            int[] arr = { 14, 8, 17, 1 };
            int count = 0;
            int temp;
            int n = arr.Length;

            Console.Write("UnSorted Array: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.Write("\n\n");

            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n-1-i; j++)
                {
                    if (arr[j] > arr[j+1])
                    {
                        temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                        count++;
                    }
                
                }
                Console.WriteLine("======================");
            }

            Console.WriteLine();
            Console.Write("Sorted Array Using Bubble Method: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }

            Console.WriteLine("\nNumber of Swap: {0}",count);
            Console.ReadKey();
        }
    }
}
