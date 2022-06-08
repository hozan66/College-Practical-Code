# Convert binary to string??

def binary_to_string(b):
    if len(b) % 8 == 0:
        steps = 8
        bytes_list = []
        final_result = ""

        for i in range(0, len(b), steps):
            bytes_list.append(b[i:i + steps])

        for i in bytes_list:
            char_list = list(i)
            char_list.reverse()
            power = 0
            result = 0
            for j in char_list:
                if j == '1':
                    result = result + 2 ** power
                power = power + 1
            final_result = final_result + chr(result)
        return final_result
    else:
        print("Error, It must be a multiple of number 8")


binary = input("Enter Binary: ")
print(binary_to_string(binary))

# Enter Binary: 001101110100000101100001
# 7Aa
