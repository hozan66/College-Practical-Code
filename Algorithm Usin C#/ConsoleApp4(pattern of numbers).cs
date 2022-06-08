using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    class Program
    {
        static void Main(string[] args)
        {
            //5
            //44
            //333
            //2222
            //11111
            int num = 5;
            for(int i = 1; i <= num; i++)
            {
                for(int j = 1; j<=i; j++)
                {
                    Console.Write(num+1-i);
                }
                Console.WriteLine();
            }

            Console.WriteLine("===========================================");
            //54321
            //5432
            //543
            //54
            //5
            int num2 = 5;
            for (int i = num2; i > 0 ; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    Console.Write(num2 + 1 - j);
                }
                Console.WriteLine();
            }

            Console.ReadKey();
        }
    }
}
