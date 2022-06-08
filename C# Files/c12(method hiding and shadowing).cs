using System;
public class Employee
{
    public string FirstName;
    public string LastName;
    public void PrintEmpInfo()
    {
        Console.WriteLine(FirstName + " " + LastName);
    }
}
class PartTimeEmployee : Employee
{
    public new void PrintEmpInfo() //this function called shadowing function
    {
        base.PrintEmpInfo(); //calling original function from father class
        Console.WriteLine("This message from part time class");
    }
}
class Program
{
    static void Main()
    {
        PartTimeEmployee emp1 = new PartTimeEmployee();
        emp1.FirstName = "hozan";
        emp1.LastName = "ageed";
        emp1.PrintEmpInfo();
        Console.WriteLine("----------------------------------");

        PartTimeEmployee emp2 = new PartTimeEmployee();
        emp2.FirstName = "hozan2";
        emp2.LastName = "ageed2";
        ((Employee)emp2).PrintEmpInfo(); //casting
        Console.WriteLine("----------------------------------");

        Employee emp3 = new PartTimeEmployee(); //casting
        emp3.FirstName = "hozan3";
        emp3.LastName = "ageed3";
        emp3.PrintEmpInfo(); 

        Console.ReadKey(true);
    }
}
/*
hozan ageed
This message from part time class
----------------------------------
hozan2 ageed2
----------------------------------
hozan3 ageed3

*/
