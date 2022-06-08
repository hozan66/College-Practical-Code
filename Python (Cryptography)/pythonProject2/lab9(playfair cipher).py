def creat_matrix_playfair(key):
    # 5X5 matrix
    key = key.lower()
    array = [[] for i in range(5)]
    row = 0
    col = 0

    # assign key to the matrix
    for i in key:
        if (i == 'j'):  # Convert j into i
            i = 'i'
        if not any(i in array[k] for k in range(5)):
            array[row].append(i)
            col += 1
        if col == 5:
            row += 1
            col = 0

    # continue assigning letters to the matrix
    letters_list = [chr(c) for c in range(97, 123)]
    for i in letters_list:
        if (i == 'j'):  # Convert j into i
            i = 'i'
        if not any(i in array[k] for k in range(5)):
            array[row].append(i)
            col += 1
        if col == 5:
            row += 1
            col = 0

    # Display 5X5 matrix
    for i in range(len(array)):
        for j in range(len(array[i])):
            print(array[i][j], end=' ')
        print()
    return array


# ====================================================================================================

# encrypt a message using Playfair cipher?
def playfair_encrypt(user_plain_text, key):
    array = creat_matrix_playfair(key)
    user_plain_text = user_plain_text.lower()
    # Removing the spaces
    plain_text = ""
    for i in user_plain_text:
        if i == ' ':
            continue
        else:
            plain_text += i
    print(plain_text)

    cipher_text = ""
    for i in range(0, len(plain_text) - 1, 2):
        if plain_text[i] == plain_text[i + 1]:
            plain_text = plain_text[:i + 1] + 'x' + plain_text[i + 1:]
    if len(plain_text) % 2 == 1:
        plain_text += 'x'
    print(plain_text)

    index = []
    for i in range(len(plain_text)):
        for row in range(len(array)):
            for col in range(len(array[row])):
                if plain_text[i] == array[row][col]:
                    index.append([row, col])

    print(index)
    for row in range(0, len(index), 2):
        if index[row][0] == index[row + 1][0]:  # if it is in the same row
            char_cipher1 = array[index[row][0]][(index[row][1] + 1) % 5]
            char_cipher2 = array[index[row + 1][0]][(index[row + 1][1] + 1) % 5]
            cipher_text += char_cipher1 + char_cipher2
            # ===========================================================================
        elif index[row][1] == index[row + 1][1]:  # if it is in the same column
            char_cipher1 = array[(index[row][0] + 1) % 5][index[row][1]]
            char_cipher2 = array[(index[row + 1][0] + 1) % 5][index[row + 1][1]]
            cipher_text += char_cipher1 + char_cipher2
            # ===========================================================================
        else:  # if it is Not in the same row and column
            char_cipher1 = array[index[row][0]][index[row + 1][1]]  # [ 1, 3 ]
            char_cipher2 = array[index[row + 1][0]][index[row][1]]  # [ 0, 1 ]
            cipher_text += char_cipher1 + char_cipher2
            # ===========================================================================
    return cipher_text.upper()


# ======================================================================================================
# decrypt a message using Playfair cipher?
def playfair_decrypt(user_cipher_text, key):
    array = creat_matrix_playfair(key)
    user_cipher_text = user_cipher_text.lower()
    # Removing the spaces
    cipher_text = ""
    for i in user_cipher_text:
        if i == ' ':
            continue
        else:
            cipher_text += i
    print(cipher_text)

    plain_text = ""
    index = []
    for i in range(len(cipher_text)):
        for row in range(len(array)):
            for col in range(len(array[row])):
                if cipher_text[i] == array[row][col]:
                    index.append([row, col])

    print(index)
    for row in range(0, len(index), 2):
        if index[row][0] == index[row + 1][0]:  # if it is in the same row
            char_cipher1 = array[index[row][0]][(index[row][1] - 1) % 5]
            char_cipher2 = array[index[row + 1][0]][(index[row + 1][1] - 1) % 5]
            plain_text += char_cipher1 + char_cipher2
            # ===========================================================================
        elif index[row][1] == index[row + 1][1]:  # if it is in the same column
            char_cipher1 = array[(index[row][0] - 1) % 5][index[row][1]]
            char_cipher2 = array[(index[row + 1][0] - 1) % 5][index[row + 1][1]]
            plain_text += char_cipher1 + char_cipher2
            # ===========================================================================
        else:  # if it is Not in the same row and column
            char_cipher1 = array[index[row][0]][index[row + 1][1]]  # [ 1, 3 ]
            char_cipher2 = array[index[row + 1][0]][index[row][1]]  # [ 0, 1 ]
            plain_text += char_cipher1 + char_cipher2
            # ===========================================================================
    return plain_text.lower()


ch = input("Please Enter E for encryption/ D for decryption: ")
if ch.upper() == 'E':
    user_plain_text = input("Please Enter a plain message: ")
    key = input("Please Enter Value of Key: ")
    print("Cipher Text is: ", playfair_encrypt(user_plain_text, key))
elif ch.upper() == 'D':
    user_cipher_text = input("Please Enter a cipher message: ")
    key = input("Please Enter Value of Key: ")
    print("Plain Text is: ", playfair_decrypt(user_cipher_text, key))
else:
    print('Invalid Character')
