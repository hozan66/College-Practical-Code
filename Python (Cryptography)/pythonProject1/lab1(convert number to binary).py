# Convert an integer number to binary with 8 bits using function ??

def num_to_binary(num):
    result = ""
    while num != 0:
        result = str(num % 2) + result
        num //= 2  # num = num // 2
    n = 8 - len(result)
    return n * '0' + result


print(num_to_binary(525))

# build-in function
binary = bin(525)
print(binary)
