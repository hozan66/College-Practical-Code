using System;
class Program
    {
        static void Main()
        {
        Circle ob1 = new Circle(1);
        float result1 = ob1.Circumference();
        Console.WriteLine(result1);

        Circle ob2 = new Circle(2);
        float result2 = ob2.Circumference();
        Console.WriteLine(result2);

        Circle ob3 = new Circle(3);
        float result3 = ob3.Circumference();
        Console.WriteLine(result3);

        Console.ReadKey(true);
        }
    }

class Circle
{
    static float PI = 3.14f;
    int radius;
    static Circle() //it will excute once no matter how many objects we have
    {
        Console.WriteLine("Static Constructor");
    }

    public Circle(int r)
    {
        radius = r;
    }

    public float Circumference()
    {
        return (2*PI*radius);
    }
}

/*
Static Constructor
6.28
12.56
18.84
*/
