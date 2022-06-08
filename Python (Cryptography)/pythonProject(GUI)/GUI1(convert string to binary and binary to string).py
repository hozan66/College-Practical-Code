from tkinter import *


def binary_to_string_method():
    textbox22.delete(1.0, END)
    st = textbox11.get(1.0, END)
    # there is enter as a char
    print(len(st))
    if (len(st) - 1) % 8 == 0:
        steps = 8
        bytes_list = []
        final_result = ""

        for i in range(0, len(st), steps):
            bytes_list.append(st[i:i + steps])

        bytes_list.pop()
        for i in bytes_list:
            char_list = list(i)
            char_list.reverse()
            power = 0
            result = 0
            for j in char_list:
                if j == '1':
                    result = result + 2 ** power
                power = power + 1
            final_result = final_result + chr(result)

        textbox22.insert(END, final_result)
    else:
        print("Error, It must be a multiple of number 8")


def binary_to_string():
    root.destroy()
    r2 = Tk()
    r2.geometry("750x600+500+20")
    r2.title('Convert Binary to String')
    r2.resizable(False, False)
    r2.config(bg="#7BDBF8")

    l1 = Label(r2, text="Enter a Binary Numbers:", font=("Arial", 16, "bold"))
    l1.pack(pady=30)
    global textbox11
    textbox11 = Text(r2, font=("Arial", 16, "bold"), width=50, height=8)
    textbox11.pack()
    b1 = Button(r2, text="String result:", font=("Arial", 16, "bold"), command=binary_to_string_method)
    b1.pack(pady=30)

    global textbox22
    textbox22 = Text(r2, font=("Arial", 16, "bold"), width=50, height=4)
    textbox22.pack(ipady=3)
    r2.mainloop()


# ========================================================================

def string_to_binary_method():
    textbox2.delete(1.0, END)
    st = textbox1.get(1.0, END)
    binary_list = list(st)
    binary_list.pop()
    final_result = ""

    for i in binary_list:
        result = ""
        num = ord(i)
        while num != 0:
            result = str(num % 2) + result
            num = num // 2
        n = 8 - len(result)
        result = '0' * n + result
        final_result = final_result + result

    textbox2.insert(END, final_result)


def string_to_binary():
    root.destroy()
    r1 = Tk()
    r1.geometry("750x600+500+20")
    r1.title('Convert String to Binary')
    r1.resizable(False, False)
    r1.config(bg="#7BDBF8")

    l1 = Label(r1, text="Enter a String:", font=("Arial", 16, "bold"))
    l1.pack(pady=30)
    global textbox1
    textbox1 = Text(r1, font=("Arial", 16, "bold"), width=50, height=4)
    textbox1.pack()
    b1 = Button(r1, text="Binary Numbers result:", font=("Arial", 16, "bold"), command=string_to_binary_method)
    b1.pack(pady=30)

    global textbox2
    textbox2 = Text(r1, font=("Arial", 16, "bold"), width=50, height=8)
    textbox2.pack(ipady=3)
    r1.mainloop()


# ==================================================================


root = Tk()
root.geometry("400x400+1000+100")
root.title('Converting')
root.resizable(False, False)
root.config(bg="#7BDBF8")

b1 = Button(root, text="Convert String to Binary", relief="raised", overrelief="flat", bd=6,
            font=("Arial", 16, "bold"), bg="blue", fg="white", command=string_to_binary)
b1.pack(pady=80)
b2 = Button(root, text="Convert Binary to String", relief="raised", overrelief="flat", bd=6,
            font=("Arial", 16, "bold"), bg="blue", fg="white", command=binary_to_string)
b2.pack()
root.mainloop()
