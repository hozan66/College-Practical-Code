# Convert character to binary with 8 bits using function ??

def character_to_binary(c):
    num = ord(c)
    result = ""
    while num != 0:
        result = str(num % 2) + result
        num = num // 2
    n = 8 - len(result)
    result = '0' * n + result
    return result


ch = input('Enter a Character: ')
print(character_to_binary(ch))
