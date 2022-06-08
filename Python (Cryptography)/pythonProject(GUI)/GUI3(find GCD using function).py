from tkinter import *


def find_gcd():
    num1 = e1.get()
    num2 = e2.get()
    e1.delete(0, END)
    e2.delete(0, END)

    if num1.isdigit() and num2.isdigit():
        num1 = int(num1)
        num2 = int(num2)
        if num2 > num1:
            num1, num2 = num2, num1  # swap in python
        r = num1 % num2
        while r != 0:
            num1 = num2
            num2 = r
            r = num1 % num2
        gcd = str(num2)
        st.set("GCD: " + gcd)
    else:
        print("Error, Please enter an integer number")


root = Tk()
root.geometry("400x450+1000+100")
root.title('Find GCD')
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

b1 = Button(root, text="Click to find GCD", relief="raised", overrelief="flat", bd=6,
            font=("Arial", 16, "bold"), bg="blue", fg="white", command=find_gcd)
b1.pack(pady=40)

st = StringVar()
st.set("GCD: ")
l3 = Label(root, textvariable=st, font=("Arial", 18, "bold"))
l3.pack(pady=20)
root.mainloop()
