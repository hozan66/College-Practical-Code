# Convert binary to decimal using function ??

def binary_to_decimal(b):
    binary_list = list(b)
    binary_list.reverse()  # ['1', '1', '1', '0']
    power = 0
    result = 0
    for i in binary_list:
        if i == '1':
            result = result + 2 ** power
        power = power + 1
    return result


binary = input('Enter a Binary: ')
print(binary_to_decimal(binary))

# build-in function
val = int('0111', 2)
print(val)
