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
    # Generate small letters a-z
    letters = []
    for i in range(97, 123):
        letters.append(chr(i))

    cipher_text = ''
    for plain_char in plain_text:
        if plain_char == ' ' or plain_char == '  ' or plain_char == '   ' or plain_char == '    ':
            continue
        plain_char = plain_char.lower()  # convert to small letter just in case
        index_value = letters.index(plain_char)
        cipher_text += letters[(index_value * alpha + beta) % 26]
    return cipher_text.upper()


def affine_decrypt(cipher_text, inv_alpha, beta):
    # Generate capital letters A-Z
    letters = []
    for i in range(65, 91):
        letters.append(chr(i))

    plain_text = ''
    for cipher_char in cipher_text:
        if cipher_char == ' ' or cipher_char == '  ' or cipher_char == '   ' or cipher_char == '    ':
            continue
        cipher_char = cipher_char.upper()  # convert to capital letter just in case
        index_value = letters.index(cipher_char)
        plain_text += letters[(inv_alpha * (index_value - beta)) % 26]
    return plain_text.lower()


alpha_key = int(input("Please Enter alhpa: "))
beta_key = int(input("Please Enter beta: "))
if gcd(alpha_key, 26) == 1:
    ch = input("Please Enter E for encryption/ D for decryption: ")
    if ch.upper() == 'E':
        plain_text = input("Please Enter a plain message: ")
        print(affine_encrypt(plain_text, alpha_key, beta_key))
    elif ch.upper() == 'D':
        cipher_text = input("Please Enter a cipher message: ")
        inv_alpha = inv(alpha_key, 26)
        print(affine_decrypt(cipher_text, inv_alpha, beta_key))
    else:
        print('Invalid Character')
else:
    print("key is Invalid")
