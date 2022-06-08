def recursion_method(m, e, n):
    if e == 0:
        z = 1
        return z
    elif e % 2 != 0:
        z = recursion_method(m, e - 1, n)
        return (z * m) % n
    else:
        z = recursion_method(m, e // 2, n)
        return (z ** 2) % n


m1 = int(input("Enter value of M: "))
e1 = int(input("Enter value of e: "))
n1 = int(input("Enter value of n: "))
z1 = recursion_method(m1, e1, n1)
print("Recursion Method")
print(f"({m1}^{e1})%{n1}={z1}")
