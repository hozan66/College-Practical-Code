from tkinter import *


def gcd(x, y):
    if y > x:
        x, y = y, x
    while y != 0:
        x, y = y, x % y
    return x
    # 17mod101=6


def inverse(x, y):
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
