from tkinter import *


def prime_or_composite():
    num = e1.get()
    if num.isdigit():
        num = int(e1.get())
        prime_list = []
        composite_list = []

        for i in range(num + 1):
            if i == 0 or i == 1:
                print(f"{i} is Not Prime and Not Composite")
            else:
                flag = True
                for j in range(2, i):
                    if i % j == 0:
                        flag = False
                        break
                if flag:
                    prime_list.append(str(i))
                else:
                    composite_list.append(str(i))
        lb1.delete(1, END)
        lb2.delete(1, END)
        for i in prime_list:
            lb1.insert(END, i)
        for i in composite_list:
            lb2.insert(END, i)

    else:
        print("Error, Please enter an integer number")


# ====================================================================


root = Tk()
root.geometry("700x700+600+10")
root.title('Check the list of prime and composite numbers')
root.resizable(False, False)
root.config(bg="#7BDBF8")

l1 = Label(root, text="Enter a Number:", font=("Arial", 18, "bold"))
l1.pack(pady=20)

e1 = Entry(root, font=("Arial", 16, "bold"), justify="center")
e1.pack()

b1 = Button(root, text="Check The Number", relief="raised", overrelief="flat", bd=6,
            font=("Arial", 14), command=prime_or_composite)
b1.pack(pady=20)

st1 = StringVar()
st1.set("List_of_Prime_Numbers: ")
lb1 = Listbox(root, listvariable=st1, font=("Arial", 12), width=30, height=24)
lb1.pack(side="left", padx=50)

st2 = StringVar()
st2.set("List_of_Composite_Numbers: ")
lb2 = Listbox(root, listvariable=st2, font=("Arial", 12), width=30, height=24)
lb2.pack(side="left")
root.mainloop()
