def caesar_encrypt(plain_text, key):
    # Generate small letters a-z
    letters = []
    for i in range(97, 123):
        letters.append(chr(i))

    cipher_text = ""
    for char_plain in plain_text:
        if char_plain == ' ' or char_plain == '  ' or char_plain == '   ' or char_plain == '    ':
            continue
        char_plain = char_plain.lower()  # convert to small letter just in case
        index_plain = letters.index(char_plain)
        index_cipher = (index_plain + key) % 26
        cipher_text = cipher_text + letters[index_cipher]
    return cipher_text.upper()


def caesar_decrypt(cipher_text, key):
    # Generate capital letters A-Z
    letters = []
    for i in range(65, 91):
        letters.append(chr(i))

    plain_text = ""
    for char_cipher in cipher_text:
        if char_cipher == ' ' or char_cipher == '  ' or char_cipher == '   ' or char_cipher == '    ':
            continue
        char_cipher = char_cipher.upper()  # convert to capital letter just in case
        index_cipher = letters.index(char_cipher)
        index_plain = (index_cipher - key) % 26
        plain_text = plain_text + letters[index_plain]
    return plain_text.lower()


print("Caesar Cipher")
choice = input("Enter (E/D) E for encryption and D for decryption: ")
if choice.upper() == 'E':
    plain_text = input('Enter Plain Text: ')  # Kurdistan
    key = int(input('Enter Key Value: '))  # 3
    print("Cipher Text: ", caesar_encrypt(plain_text, key))  # Cipher Text:  NXUGLVWDQ
elif choice.upper() == 'D':
    cipher_text = input('Enter Cipher Text: ')  # NXUGLVWDQ
    key = int(input('Enter Key Value: '))  # 3
    print("Plain Text: ", caesar_decrypt(cipher_text, key))  # Plain Text:  Kurdistan
else:
    print("You Entered Wrong Character")
