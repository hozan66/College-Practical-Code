# Find inverse using extendable (Euclidean) method (recursion)??

def gcd(x, y):
    # q1 = []
    if y > x:
        x, y = y, x
    while y != 0:
        # q1.append(x // y)
        x, y = y, x % y
    return x
    # 17mod101=6


def inv(x, y):
    mod = y
    if gcd(x, y) == 1:
        a = 0
        b = 1
        while y % x != 0:
            q = y // x
            r = y % x
            ab = a - b * q
            y, x, a, b = x, r, b, ab
        return ab % mod
    else:
        return False


number = int(input("Enter a Number: "))
mod1 = int(input("Enter a Modular: "))
z = inv(number, mod1)
print("Inverse=" + str(z))
