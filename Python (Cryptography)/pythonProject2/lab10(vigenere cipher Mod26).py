# Q3) Write a program to encrypt and decrypt a message using
# Vigenere cipher using only 26 small letters?

def letters_list():
    letters = []
    for i in range(ord('a'), ord('z') + 1):
        letters.append(chr(i))
    return letters


def vigenere_encrypt(plain_text, key):
    plain_text = plain_text.lower()
    key = key.lower()
    # Remove key spaces
    key2 = ""
    for key_char in key:
        if key_char == ' ':
            continue
        else:
            key2 += key_char
    key = key2

    cipher_text = ""
    letters = letters_list()
    key_index = []
    for key_char in key:
        for j in range(0, 26):
            if key_char == letters[j]:
                key_index.append(j)

    count = 0
    for plain_char in plain_text:
        if plain_char == ' ':
            continue
        for j in range(0, 26):
            if plain_char == letters[j]:
                key_value = key_index[count % len(key)]
                cipher_text += letters[(j + key_value) % 26]
                count += 1
    return cipher_text


def vigenere_decrypt(cipher_text, key):
    cipher_text = cipher_text.lower()
    key = key.lower()
    # Remove key spaces
    key2 = ""
    for key_char in key:
        if key_char == ' ':
            continue
        else:
            key2 += key_char
    key = key2

    plain_text = ""
    letters = letters_list()
    key_index = []
    for key_char in key:
        for j in range(0, 26):
            if key_char == letters[j]:
                key_index.append(j)

    count = 0
    for cipher_char in cipher_text:
        if cipher_char == ' ':
            continue
        for j in range(0, 26):
            if cipher_char == letters[j]:
                key_value = key_index[count % len(key)]
                plain_text += letters[(j - key_value) % 26]
                count += 1
    return plain_text


# print(vigenere_encrypt('thankspeshmarga', 'slemani').upper())
# print(vigenere_decrypt('lsezkfxwdlyaeos', 'slemani'))
choice = input("Please Enter E for encryption/ D for decryption: ")
if choice.upper() == 'E':
    plain_text = input('Enter Plain Text: ')  # Kurdistan
    key = input('Enter Key Value: ')
    print("Cipher Text: ", vigenere_encrypt(plain_text, key))
elif choice.upper() == 'D':
    cipher_text = input('Enter Cipher Text: ')
    key = input('Enter Key Value: ')
    print("Plain Text: ", vigenere_decrypt(cipher_text, key))
else:
    print("You Entered Wrong Character")
