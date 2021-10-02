a = input()
b = input()
printer = "No"

if not a == b:
    bool_list = [x for x in range(len(a))]
    false_count = 0
    for i in range(len(a)):
        if(a[i] == b[i]):
            bool_list[i] = True
        else:
            bool_list[i] = False
            false_count+=1

    if false_count != 2:
        printer = "No"
    else:
        for i in range(len(a)):
            if (not bool_list[i]) and not bool_list[i+1]:
                if(a[i] == b[i+1] and b[i] == a[i+1]):
                    printer = "Yes"
                    break
else :
    printer = "Yes"
print(printer)