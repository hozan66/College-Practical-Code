using System;
    class Program
    {
        static void Main()
        {
        int a = 2, b = 4;
        method1(a);   //passing by value
        method2(ref b);   //passing by reference

        Console.WriteLine(a);
        Console.WriteLine(b);

        int div = 0, mul = 0;
        Console.WriteLine("sum={0}",calculate(50,2,out div,out mul));
        Console.WriteLine("div={0}",div);
        Console.WriteLine("mul={0}",mul);

        arrMethod("Numbers",1, 2, 3, 4, 5, 6); //you can send parameters as much as you want
        Console.ReadKey(true);
        }

    public static void method1(int c)
    {
        c = 10;
    }

    public static void method2(ref int d)
    {
        d = 20;
    }

    public static int calculate(int num1,int num2,out int div,out int mul)
    {
        div = num1 / num2;
        mul = num1 * num2;
        return num1 + num2;
    }

    public static void arrMethod(string n,params int[] args)//params must be the last parameters
    {
        Console.WriteLine(n);
        foreach (int i in args)
            Console.WriteLine(i);
    }
}
/*
2
20
sum = 52
div = 25
mul = 100
Numbers
1
2
3
4
5
6
*/
