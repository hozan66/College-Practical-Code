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
            //Format Document(Ctrl+K , Ctrl + D ))

            // Check if it is vowel

            Console.Write("Enter a Character: ");
            char ch = Convert.ToChar(Console.ReadLine());

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o')
            {
                Console.WriteLine("Character is a vowel");
            }
            else
            {
                Console.WriteLine("Character is NOT a vowel");
            }




            Console.ReadKey();
        }
    }
}
