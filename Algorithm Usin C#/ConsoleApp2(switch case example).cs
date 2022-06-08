using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Three Numbers: ");
            int num1 = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter Three Numbers: ");
            int num2 = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter Three Numbers: ");
            int num3 = Convert.ToInt32(Console.ReadLine());
            //read input with spaces in c# HW
            //example switch case in c#

            if (num1 > num2)
            {
                if (num1 > num3)
                {
                    Console.WriteLine("num1 is the Greatest");
                }
                else
                {
                    Console.WriteLine("num3 is the Greatest");
                }
            }
            else
            {
                if (num2 > num3) {
                    Console.WriteLine("num2 is the Greatest");
                }
                else
                {
                    Console.WriteLine("num3 is the Greatest");
                }
                    
            }
            
            Console.Write("Enter a Number of Day: ");
            int day = Convert.ToInt32(Console.ReadLine());
            switch (day)
            {
                case 1:
                    Console.WriteLine("Monday");
                    break;
                case 2:
                    Console.WriteLine("Tuesday");
                    break;
                case 3:
                    Console.WriteLine("Wednesday");
                    break;
                case 4:
                    Console.WriteLine("Thursday");
                    break;
                case 5:
                    Console.WriteLine("Friday");
                    break;
                case 6:
                    Console.WriteLine("Saturday");
                    break;
                case 7:
                    Console.WriteLine("Sunday");
                    break;
                default:
                    Console.WriteLine("There is no such a day in this number");
                    break;
            }

            Console.ReadKey();
        }
    }
}
