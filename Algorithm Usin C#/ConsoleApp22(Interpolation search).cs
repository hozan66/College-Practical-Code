using System;

namespace ConsoleApp22
{
    class Program
    {
        static void Main(string[] args)
        {
            // Interpolation search
            //int[] arr = { 11, 22, 33, 44, 55, 66, 77};
            //int[] arr = { 2,4,6,8,10,12,14,16, 18, 20, 22, 24, 26, 27, 30};
            int[] arr = { 10,14,19,26,27,33,37,40,42,44};
            int n = arr.Length;
            Console.Write("Sorted Array: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine("\n");

            int low = 0;
            int high = n-1;
            bool flag = false;
            int position=-1;
            int counter = 0;
            Console.Write("Enter value of Key: ");
            int key = Convert.ToInt32(Console.ReadLine());

            if (key <= arr[n - 1] && key >= arr[0])
            {
                for (int i = 0; i < n; i++)
                {
                    counter++;
                    double x = (high - low) / Convert.ToDouble(arr[high] - arr[low]);
                    int mid =low + Convert.ToInt32( x * (key - arr[low]) );
                    if (key == arr[mid])
                    {
                        flag = true;
                        position = mid;
                        break;
                    }
                    else if (key > arr[mid])
                    {
                        low = mid + 1;

                    }
                    else
                    {
                        high = mid - 1;
                    }
                }
            }

            if (flag == true){
                Console.WriteLine("Element is Found\n");
                Console.WriteLine("Number of the Iteration: {0}", counter);
                Console.WriteLine("Position of KEY: {0}", position);
            }
            else
                Console.WriteLine("Element is NOT Found\n");

            Console.ReadKey();
        }
    }
}
