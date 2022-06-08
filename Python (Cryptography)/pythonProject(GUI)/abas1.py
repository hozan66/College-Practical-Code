from tkinter import *

root = Tk()
root.geometry("500x500")
root.config(bg="gray")


def find_gcd(a, b):
    if b > a:
        a, b = b, a
    q = []
    while b != 0:
        q.append(a // b)
        a, b = b, a % b
    return q, a


def inverse():
    num = my_entry.get()
    mod = my_entry1.get()
    num = int(num)
    mod = int(mod)
    my_entry.delete(0, END)
    my_entry1.delete(0, END)
    if num > mod:
        num = num % mod
    x = [0, 1]
    y = [1, 0]
    q1, gcd = find_gcd(num, mod)
    if gcd == 1:
        for i in range(0, len(q1) - 1):
            x.append(-1 * q1[i] * x[i + 1] + x[i])
            y.append(-1 * q1[i] * y[i + 1] + y[i])

        st.set("Inverse :" + str(x[-1] % mod))
    else:
        return False


my_label = Label(root, text="Find inverse by itreation method", font=("", 25))
my_label.pack()

# ------------------------------------
my_label1 = Label(root, text="Enter first number :", font=("", 10), bg="gray")
my_label1.place(x=20, y=50)

my_label2 = Label(root, text="Enter second number :", font=("", 10), bg="gray")
my_label2.place(x=20, y=100)

my_entry = Entry(root)
my_entry.place(x=200, y=50)

my_entry1 = Entry(root)
my_entry1.place(x=200, y=100)

my_button = Button(root, text="Find inverse ", command=inverse)
my_button.place(x=100, y=200)

st = StringVar()
st.set("Inverse :")
my_label3 = Label(root, textvariable=st, width=20)
my_label3.place(x=200, y=200)

root.mainloop()
