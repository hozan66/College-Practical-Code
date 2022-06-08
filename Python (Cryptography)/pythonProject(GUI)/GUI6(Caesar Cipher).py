from tkinter import *


def caesar_encrypt():
    textbox2.delete(1.0, END)
    plain_text = textbox1.get(1.0, END)
    if len(plain_text) == 1:  # there is \n as a char by default
        print('Empty Text')
    else:
        num1 = e1.get()
        if num1.isdigit():
            key = int(num1)

            # Generate small letters a-z
            letters = []
            for i in range(97, 123):
                letters.append(chr(i))

            cipher_text = ""
            for char_plain in plain_text:
                if char_plain == ' ' or char_plain == '  ' or char_plain == '   ' or char_plain == '    ' or char_plain == '\n':
                    continue
                char_plain = char_plain.lower()  # convert to small letter just in case
                index_plain = letters.index(char_plain)
                index_cipher = (index_plain + key) % 26
                cipher_text = cipher_text + letters[index_cipher]
            textbox2.insert(END, cipher_text.upper())
        else:
            print('The Key Is Not Digit')


def caesar_decrypt():
    textbox4.delete(1.0, END)
    cipher_text = textbox3.get(1.0, END)
    if len(cipher_text) == 1:  # there is \n as a char by default
        print('Empty Text')
    else:
        num2 = e2.get()
        if num2.isdigit():
            key = int(num2)

            # Generate capital letters A-Z
            letters = []
            for i in range(65, 91):
                letters.append(chr(i))

            plain_text = ""
            for char_cipher in cipher_text:
                if char_cipher == ' ' or char_cipher == '  ' or char_cipher == '   ' or char_cipher == '    ' or char_cipher == '\n':
                    continue
                char_cipher = char_cipher.upper()  # convert to capital letter just in case
                index_cipher = letters.index(char_cipher)
                index_plain = (index_cipher - key) % 26
                plain_text = plain_text + letters[index_plain]
            textbox4.insert(END, plain_text.lower())
        else:
            print('The Key Is Not Digit')


def encryption():
    root.destroy()
    window1 = Tk()
    window1.geometry("750x660+500+20")
    window1.title('Caesar Encryption')
    window1.resizable(False, False)
    window1.config(bg="#7BDBF8")

    l1 = Label(window1, text="Enter Plain Text: ", font=("Arial", 16, "bold"))
    l1.pack(pady=10)
    global textbox1
    textbox1 = Text(window1, font=("Arial", 16, "bold"), width=50, height=4)
    textbox1.pack()

    l2 = Label(window1, text="Enter Key Value: ", font=("Arial", 16, "bold"))
    l2.pack(pady=20)
    global e1
    e1 = Entry(window1, font=("Arial", 14, "bold"), justify="center")
    e1.pack()

    b3 = Button(window1, text="Convert", relief="raised", overrelief="flat", bd=6,
                font=("Arial", 18, "bold"), bg="orange", fg="white", command=caesar_encrypt)
    b3.pack(pady=30)
    l3 = Label(window1, text="Cipher Text: ", font=("Arial", 16, "bold"))
    l3.pack(pady=10)
    global textbox2
    textbox2 = Text(window1, font=("Arial", 16, "bold"), width=50, height=4)
    textbox2.pack(ipady=3)

    window1.mainloop()


def decryption():
    root.destroy()
    window2 = Tk()
    window2.geometry("750x660+500+20")
    window2.title('Caesar Decryption')
    window2.resizable(False, False)
    window2.config(bg="#7BDBF8")

    l4 = Label(window2, text="Enter Cipher Text: ", font=("Arial", 16, "bold"))
    l4.pack(pady=10)
    global textbox3
    textbox3 = Text(window2, font=("Arial", 16, "bold"), width=50, height=4)
    textbox3.pack()

    l5 = Label(window2, text="Enter Key Value: ", font=("Arial", 16, "bold"))
    l5.pack(pady=20)
    global e2
    e2 = Entry(window2, font=("Arial", 14, "bold"), justify="center")
    e2.pack()

    b4 = Button(window2, text="Convert", relief="raised", overrelief="flat", bd=6,
                font=("Arial", 18, "bold"), bg="orange", fg="white", command=caesar_decrypt)
    b4.pack(pady=30)
    l6 = Label(window2, text="Plain Text: ", font=("Arial", 16, "bold"))
    l6.pack(pady=10)
    global textbox4
    textbox4 = Text(window2, font=("Arial", 16, "bold"), width=50, height=4)
    textbox4.pack(ipady=3)

    window2.mainloop()


root = Tk()
root.geometry("400x450+1000+100")
root.title('Caesar Cipher')
root.resizable(False, False)
root.config(bg="#7BDBF8")

b1 = Button(root, text="Encryption", relief="raised", overrelief="flat", bd=6,
            font=("Arial", 20, "bold"), bg="orange", fg="white", command=encryption)
b1.pack(pady=80)

b2 = Button(root, text="Decryption", relief="raised", overrelief="flat", bd=6,
            font=("Arial", 20, "bold"), bg="orange", fg="white", command=decryption)
b2.pack(pady=40)

root.mainloop()
