# Find GCD between two numbers and its operations using function??

def gcd(a, b):
    if b > a:
        a, b = b, a  # swap in python
    while b != 0:
        q = a // b
        r = a % b
        result = str(a) + "=" + str(q) + "*" + str(b) + "+" + str(r)
        print(termcolor.colored(result, 'blue'))
        a, b = b, a % b
    return a


# pip install termcolor
import termcolor

num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
print(f"GCD({num1},{num2})={gcd(num1, num2)}")
