using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp5
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[3];

            Console.WriteLine("Enter Array of Number: ");

            for (int i = 0; i < 3; i++)
            {
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }

            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine("Number: {0}", arr[i]);
            }

            Console.WriteLine("============================================");

            foreach (int j in arr)
            {
                Console.WriteLine("Number: {0}", j);
            }

            //char[] gender = new char[] { 'F', 'M', 'M', 'F', 'M', 'M' };
            char[] gender = { 'F', 'M', 'M', 'F', 'M', 'M' };
            int male = 0;
            int female = 0;

            foreach (char j in gender)
            {
                //Console.WriteLine("Number: {0}", j);
                if (j == 'M')
                    male++;
                else
                    female++;
            }
            Console.WriteLine("============================================");
            Console.WriteLine("Number of Male: {0}, Number of Female: {1}", male, female);


            Program ob = new Program();
            Console.WriteLine(ob.num(36, 335));
            

            Console.ReadKey();
        }
        private int num(int x, int y)
        {
            if (x > y)
            {
                return x;
            }
            else
            {
                return y;
            }
        }
    }
}
