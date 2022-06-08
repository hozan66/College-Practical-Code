using System;
using ProjectA.TeamA;
    class Program
    {
        static void Main()
        {
        //ProjectA.TeamA.ClassA.print();
        ClassA.print();
        Console.ReadKey(true);
        }
    }

namespace ProjectA
{
    namespace TeamA
    {
        class ClassA
        {
            public static void print()
            {
                Console.WriteLine("Hello Class A");
            }
        }
    }
}