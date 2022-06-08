using System;
    class Program
    {
        static void Main()
        {
        Program p = new Program();
        p.EvenNumbers(10);      //function is not static
        Console.WriteLine();
        Program.OddNumbers(10); //function is static
        Console.WriteLine();
        Console.WriteLine(Program.AddNumbers(10,20)); //function is static

        Console.ReadKey(true);
        }

    public void EvenNumbers(int target)
    {
        int start = 0;
        while(start<= target)
        {
            Console.WriteLine("the number is {0}", start);
            start += 2;
        }
    }

    public static void OddNumbers(int target)
    {
        int start = 1;
        while (start <= target)
        {
            Console.WriteLine("the number is {0}", start);
            start += 2;
        }
    }

    public static int AddNumbers(int num1,int num2)
    {
        int result = num1 + num2;
        return result;
    }
}
/*
the number is 0
the number is 2
the number is 4
the number is 6
the number is 8
the number is 10

the number is 1
the number is 3
the number is 5
the number is 7
the number is 9

30

*/
