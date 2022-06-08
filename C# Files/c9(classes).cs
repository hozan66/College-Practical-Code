using System;
    class Program
    {
        static void Main()
        {
        Animal dog = new Animal("Black",1,"Lucy");
        dog.Run();
        dog.PrintFullInfo();

        Console.ReadKey(true);
        }
    }

class Animal
{
    string color;
    int length;
    string name;

    public Animal(string c, int l, string n) //constructor
    {
        color = c;
        length = l;
        name = n;
    }

    public void Run()
    {
        Console.WriteLine("the {0} is running",name);
    }

    public void PrintFullInfo()
    {
        Console.WriteLine("Color={0}, Length={1}, Name={2}", color, length, name);
    }

    ~Animal() //destructor
    {
        name = null;
        color = null;
        //clean the code
    }

}

/*
the Lucy is running
Color=Black, Length=1, Name=Lucy
*/

