using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp9
{
    class Program
    {
        static void Main(string[] args)
        {
            //Insertion Sort

            int[] arr = { 10, 4, 5, 8, 2, 1 };
            int n = arr.Length;
            int temp;

            Console.WriteLine("Unsorted Array: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }

            Console.WriteLine();

            for (int i = 0; i < n - 1; i++)
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


            Console.WriteLine("Sorted Array: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }

            Console.WriteLine();

            Random rnd = new Random();
            Console.WriteLine("List of random numbers: ");
            for (int i = 0; i < 10; i++)
            {
                int m = rnd.Next(0, 2);
                Console.Write(m + " ");
            }

            
            


            Console.ReadKey();
        }
    }
}
