def check_numbers(num):
    for i in range(num + 1):
        if i == 0 or i == 1:
            print(f"{i} is Not Prime and Not Composite")
        else:
            flag = True
            for j in range(2, i):
                if i % j == 0:
                    flag = False
                    break
            if flag:
                print(f"{i} is Prime")
            else:
                print(f"{i} is Composite")


check_numbers(100)
