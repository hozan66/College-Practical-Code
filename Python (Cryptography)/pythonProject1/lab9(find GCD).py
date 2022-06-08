num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
print(f"GCD({num1},{num2})=")

if num2 > num1:
    num1, num2 = num2, num1  # swap in python
    print(f"Num1={num1} and Num2={num2}")
r = num1 % num2
while r != 0:
    num1 = num2
    num2 = r
    r = num1 % num2

print(num2)
