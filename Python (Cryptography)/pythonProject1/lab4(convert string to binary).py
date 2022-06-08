# Convert string to binary ??
def string_to_binary(tx):
    binary_list = list(tx)
    final_result = ""

    for i in binary_list:
        result = ""
        num = ord(i)
        while num != 0:
            result = str(num % 2) + result
            num = num // 2
        n = 8 - len(result)
        result = '0' * n + result
        final_result = final_result + result
    return final_result


st = input("Enter a String: ")
print(string_to_binary(st))

# Enter a String: 7Aa
# 001101110100000101100001
