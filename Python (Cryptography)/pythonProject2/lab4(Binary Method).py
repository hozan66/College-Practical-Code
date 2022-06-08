def binary_method(m, e, n):
    e = bin(e)
    if e[2] == '1':
        c = m
    else:
        c = 1

    for i in range(3, len(e)):
        print(c)
        c = (c ** 2) % n
        if e[i] == '1':
            c = (c * m) % n
    return c


m1 = int(input("Enter value of M: "))
e1 = int(input("Enter value of e: "))
n1 = int(input("Enter value of n: "))
c1 = binary_method(m1, e1, n1)
print("Binary Method")
print(f"({m1}^{e1})%{n1}={c1}")
