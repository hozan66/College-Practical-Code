using System;
using PATA = ProjectA.TeamA;  //call Elias we use it when we have two classes in the same name
using PBTB = ProjectA.TeamB;
class Program
{
    static void Main()
    {
        PATA.ClassA.print();
        PBTB.ClassA.print();
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

namespace ProjectA
{
    namespace TeamB
    {
        class ClassA
        {
            public static void print()
            {
                Console.WriteLine("Hello Class B");
            }
        }
    }
}

//Hello Class A
//Hello Class B
