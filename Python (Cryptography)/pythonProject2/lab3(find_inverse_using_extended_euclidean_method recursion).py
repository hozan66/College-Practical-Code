# Find inverse using extendable (Euclidean) method??

def gcd(a, b):
    if a == 0:
        return (b, 0, 1)
    else:

        g, x, y = gcd(b % a, a)
        print(g, x, y)
        return (g, y - (b // a) * x, x)


def inverse(a, b):
    if a > b:
        a = a % b
    g, x, y = gcd(a, b)
    print("Last Iteration")
    print(g, x, y)
    if g != 1:
        return False
    else:
        return x % b


#  find inverse using extended euclidean method
a1 = int(input("Please Enter first number: "))
b1 = int(input("Please Enter second number: "))

inv = inverse(a1, b1)

if inv:
    print('Inverse= ' + str(inv))
else:
    print("Inverse does not exist ")
