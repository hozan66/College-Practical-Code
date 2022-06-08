# Check if it is prime or composite ??
# Composite is a number that greater than 1 and not prime
def prime_or_composite(num):
    flag = 1
    if num == 0 or num == 1:
        flag = 2
        return flag
    for i in range(2, num):
        if num % i == 0:
            flag = 0
            break
    return flag


number = int(input("Enter a Number to Check if it is prime or composite: "))
if prime_or_composite(number) == 0:
    print(f'{number} is Composite')
elif prime_or_composite(number) == 1:
    print(f'{number} is Prime')
else:
    print(f'{number} is NOT Prime and NOT Composite')
