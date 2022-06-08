from tkinter import *

root = Tk()
root.geometry("500x500")
root.config(bg="gray")
#==================function============================
# def convert_to_binary(num):
#     result = ""
#     while num != 0:
#     result = str(num % 2) + result
#     num //= 2
#
#     return result

def binary_method(m, e, n):
    global my_list
    my_list.insert(END,"i"+"   "+"e"+"   "+"c=c^2 mod n"+"   "+"c=c*m mod n")
    e = bin(e)

    if e[2] == '1':
        c = m
    else:
        c = 1
    my_list.insert(END, str(len(e)-3) + "   " + e[2] + "  \t " + str(c) + "   " + str(c))
    for i in range(3, len(e)):
        c = (c ** 2) % n
        # my_list.insert(i, str(len(e) - i-1) + "   " + e[i] + "  \t " + str(c) + "   " "x"  )
        global c1
        c1 = c
        if e[i] == '1':


            c = (c * m) % n

        my_list.insert(END, str(len(e) - i-1) + "   " + e[i] + "  \t " + str(c1) + "   "+str(c))

    return c

def find_binary():
    m=my_entry.get()
    e=my_entry1.get()
    n=my_entry2.get()
    m=int(m)
    e=int(e)
    n=int(n)
    # convert_to_binary(e)
    t=binary_method(m, e, n)
    st.set(str(t))




my_label = Label(root, text="Find inverse by binary method", font=("", 25))
my_label.pack()

# ------------------------------------
my_label1 = Label(root, text="Enter M :", font=("", 10), bg="gray")
my_label1.place(x=20, y=50)

my_label2 = Label(root, text="Enter E :", font=("", 10), bg="gray")
my_label2.place(x=20, y=100)

my_label3 = Label(root, text="Enter n :", font=("", 10), bg="gray")
my_label3.place(x=20, y=150)

my_entry = Entry(root)
my_entry.place(x=200, y=50)

my_entry1 = Entry(root)
my_entry1.place(x=200, y=100)

my_entry2 = Entry(root)
my_entry2.place(x=200, y=150)

my_button = Button(root, text="Find inverse ",command=find_binary)
my_button.place(x=100, y=250)

st = StringVar()
st.set("Inverse :")
my_label4 = Label(root, textvariable=st, width=20)
my_label4.place(x=200, y=250)

my_list=Listbox(root,width=50)
my_list.place(x=150, y=300)



root.mainloop()