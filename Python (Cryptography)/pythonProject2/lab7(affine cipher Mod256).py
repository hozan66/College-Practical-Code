def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


def inv(x, y):
    mod = y
    if gcd(x, y) == 1:
        a = 0
        b = 1
        while y % x != 0:
            q = y // x
            r = y % x
            ab = a - b * q
            y, x, a, b = x, r, b, ab
        return ab % mod
    else:
        return False


def affine_encrypt(plain_text, alpha, beta):
    cipher_text = ''
    for plain_char in plain_text:
        index_value = ord(plain_char)
        cipher_text += chr((index_value * alpha + beta) % 256)
    return cipher_text


def affine_decrypt(cipher_text, inv_alpha, beta):
    plain_text = ''
    for cipher_char in cipher_text:
        index_value = ord(cipher_char)
        plain_text += chr((inv_alpha * (index_value - beta)) % 256)
    return plain_text


alpha_key = int(input("Please Enter alhpa: "))
beta_key = int(input("Please Enter beta: "))
if gcd(alpha_key, 256) == 1:
    ch = input("Please Enter E for encryption/ D for decryption: ")
    if ch.upper() == 'E':
        plain_text = input("Please Enter a plain message: ")
        print(affine_encrypt(plain_text, alpha_key, beta_key))
    elif ch.upper() == 'D':
        cipher_text = input("Please Enter a cipher message: ")
        inv_alpha = inv(alpha_key, 256)
        print(affine_decrypt(cipher_text, inv_alpha, beta_key))
    else:
        print('Invalid Character')
else:
    print("key is Invalid")
