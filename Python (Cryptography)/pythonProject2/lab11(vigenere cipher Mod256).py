# 1. Write a program to encrypt and decrypt a message using
# Vigenere cipher using ASCII code?

def vigenere_encrypt(plain_text, key):
    cipher_text = ""
    key_index = []
    for key_char in key:
        key_index.append(ord(key_char))

    count = 0
    for plain_char in plain_text:
        key_value = key_index[count % len(key)]
        cipher_text += chr((ord(plain_char) + key_value) % 256)
    return cipher_text


def vigenere_decrypt(cipher_text, key):
    plain_text = ""
    key_index = []
    for key_char in key:
        key_index.append(ord(key_char))

    count = 0
    for cipher_char in cipher_text:
        key_value = key_index[count % len(key)]
        plain_text += chr((ord(cipher_char) - key_value) % 256)
    return plain_text


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
