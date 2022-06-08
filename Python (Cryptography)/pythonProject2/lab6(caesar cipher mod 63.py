# 1. Write a program to Encrypt and decrypt a text using only
# space, numbers, capital and small letters without using
# ASCII code for Caesar cipher?

def generate_letters():
    letters = []
    letters.append(' ')
    for i in range(0, 10):
        letters.append(str(i))

    for i in range(ord('A'), ord('Z') + 1):
        letters.append(chr(i))

    for i in range(ord('a'), ord('z') + 1):
        letters.append(chr(i))
    return letters


def caesar_encrypt(plain_text, key):
    letters = generate_letters()

    cipher_text = ""
    for char_plain in plain_text:
        index_plain = letters.index(char_plain)
        index_cipher = (index_plain + key) % 63
        cipher_text = cipher_text + letters[index_cipher]
    return cipher_text


def caesar_decrypt(cipher_text, key):
    letters = generate_letters()

    plain_text = ""
    for char_cipher in cipher_text:
        index_cipher = letters.index(char_cipher)
        index_plain = (index_cipher - key) % 63
        plain_text = plain_text + letters[index_plain]
    return plain_text


print("Caesar Cipher")
choice = input("Enter (E/D) E for encryption and D for decryption: ")
if choice.upper() == 'E':
    plain_text = input('Enter Plain Text: ')
    key = int(input('Enter Key Value: '))
    print("Cipher Text: ", caesar_encrypt(plain_text, key))
elif choice.upper() == 'D':
    cipher_text = input('Enter Cipher Text: ')
    key = int(input('Enter Key Value: '))
    print("Plain Text: ", caesar_decrypt(cipher_text, key))
else:
    print("You Entered Wrong Character")
