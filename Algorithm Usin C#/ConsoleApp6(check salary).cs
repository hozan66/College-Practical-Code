using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp6
{
    class Car
    {
        public String car_color = "Red";
        public Car(String color)
        {
            car_color = color;
        }
        public String getColor()
        {
            return car_color;
        }
    }
    class Employee
    {
        public String name;
        public double salary;

        public void getInfo()
        {
            if (salary > 4000)
            {
                Console.WriteLine("Your Salary ");
            }
        }
    }
    class Program
    {
        int salary = 2500;

        double getSalary()
        {
            return salary;
        }
        static void Main(string[] args)
        {
            Car ob = new Car("Green");
            Console.WriteLine(ob.car_color);
            Console.WriteLine(ob.getColor());

            Program ob2 = new Program();

            Console.WriteLine("Enter Your Salary: ");

            double money = Convert.ToDouble(Console.ReadLine());

            if (money > ob2.getSalary())
            {
                Console.WriteLine("Your Salary is Greater than {0}", ob2.getSalary());

                //Console.WriteLine(ob2.getSalary());

            }
            else {
                Console.WriteLine("Your Salary is not Greater than {0}", ob2.getSalary());

            }




            Console.ReadKey();
        }
    }
}
