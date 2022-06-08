# Find GCD between two numbers using recursive??

def gcd(a, b):
    if b > a:
        a, b = b, a  # swap in python
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
print(f"GCD({num1},{num2})={gcd(num1, num2)}")
