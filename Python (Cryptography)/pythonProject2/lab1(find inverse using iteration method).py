# Find inverse using iteration method??
def gcd(a, b):
    if b > a:
        a, b = b, a
    q = []
    while b != 0:
        q.append(a // b)
        a, b = b, a % b
    return q, a


def inverse(num, mod):
    if num > mod:
        num = num % mod
    x = [0, 1]
    y = [1, 0]
    q1, gcd1 = gcd(num, mod)
    if gcd1 == 1:
        for i in range(0, len(q1) - 1):
            x.append(-1 * q1[i] * x[i + 1] + x[i])
            y.append(-1 * q1[i] * y[i + 1] + y[i])
        return x[-1] % mod
    else:
        return False


a1 = int(input("Enter the first number: "))
b1 = int(input("Enter the second number: "))

inv = inverse(a1, b1)
if inv:
    print("Inverse=" + str(inv))
    print(f"Check: {a1}*{inv}%{b1}={a1 * inv % b1}")
else:
    print("Inverse does not exist")
