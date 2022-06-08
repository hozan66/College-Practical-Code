using System;
    class Program
    {
        static void Main()
        {
        int[] numbers = new int[4];
        numbers[0] = 101;
        numbers[1] = 102;
        numbers[2] = 103;
        numbers[3] = 104;

        for (int i = 0; i < numbers.Length; i++)
            Console.WriteLine(numbers[i]);

        foreach (int i in numbers)
            Console.WriteLine("Foreach {0}",i);

        Console.ReadKey(true);
    }
    }
/*
101
102
103
104
Foreach 101
Foreach 102
Foreach 103
Foreach 104
 
*/
