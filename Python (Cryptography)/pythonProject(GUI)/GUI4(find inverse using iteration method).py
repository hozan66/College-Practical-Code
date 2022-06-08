from tkinter import *


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


def find_inverse():
    num1 = e1.get()
    num2 = e2.get()
    e1.delete(0, END)
    e2.delete(0, END)

    if num1.isdigit() and num2.isdigit():
        a1 = int(num1)
        b1 = int(num2)
        inv = inverse(a1, b1)
        if inv:
            print("Inverse=" + str(inv))
            print(f"Check: {a1}*{inv}%{b1}={a1 * inv % b1}")
            inv = str(inv)
            st.set("Inverse: " + inv)
        else:
            print("Inverse does not exist")

    else:
        print("Error, Please enter an integer number")


root = Tk()
root.geometry("400x450+1000+100")
root.title('Find Inverse of Two Numbers')
root.resizable(False, False)
root.config(bg="#7BDBF8")

l1 = Label(root, text="Enter The First Number:", font=("Arial", 18))
l1.pack(pady=20)
e1 = Entry(root, font=("Arial", 14, "bold"), justify="center")
e1.pack()

l2 = Label(root, text="Enter The Second Number:", font=("Arial", 18))
l2.pack(pady=20)
e2 = Entry(root, font=("Arial", 14, "bold"), justify="center")
e2.pack()

b1 = Button(root, text="Click to find Inverse", relief="raised", overrelief="flat", bd=6,
            font=("Arial", 16, "bold"), bg="blue", fg="white", command=find_inverse)
b1.pack(pady=40)

st = StringVar()
st.set("Inverse: ")
l3 = Label(root, textvariable=st, font=("Arial", 18, "bold"))
l3.pack(pady=20)
root.mainloop()
