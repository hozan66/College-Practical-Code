using System;
public class Employee   //we must declare kind of class (public) for inheritance
{
    public string FirstName;
    public string LastName;
    public string Address;
    public Employee() 
    {
        Console.WriteLine("Empty Constructor From Employee class");
    }
    public Employee(string key)
    {
        Console.WriteLine("parameterize Constructor From Employee class {0}",key);
    }
    public void PrintEmpInfo()
    {
        Console.WriteLine(FirstName + " " + LastName);
    }
}

    public class FullTimeEmployee : Employee
    {
        public float theSalary;
    public FullTimeEmployee() : base("(trick)")  //base here to call parameterize constructor not empty constructor from Employee class
    {
        Console.WriteLine("Empty Constructor From FullTimeEmployee class");
    }
}

    class PartTimeEmployee : FullTimeEmployee
    {
         public float partSalary;
    }
    class Program
    {
        static void Main()
        {
        FullTimeEmployee emp1 = new FullTimeEmployee();
        emp1.FirstName="hozan";
        emp1.LastName="ageed";
        emp1.Address = "Kawrkwsk";
        emp1.theSalary = 24.25f;
        emp1.PrintEmpInfo();

        PartTimeEmployee emp2 = new PartTimeEmployee();
        emp2.theSalary = 0;
        emp2.partSalary = 0;

        Console.ReadKey(true);
        }
    }
/*
parameterize Constructor From Employee class (trick)
Empty Constructor From FullTimeEmployee class
hozan ageed
parameterize Constructor From Employee class (trick)
Empty Constructor From FullTimeEmployee class

*/
