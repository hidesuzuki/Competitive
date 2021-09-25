n = int(input())
result = 0

for i in range(n):
    thisCount = i + 1
    if not (str(thisCount).startswith('1')):
        continue
    thisCountStr = str(thisCount)
    for j in range(len(thisCountStr)):
        # print('thiCount = ' + str(thisCount) + ', thisCountStr[' + str(j) + '] = ' + str(thisCountStr[j]))
        if not (thisCountStr[j] == '1'):
            result += j
            break
        elif (j == len(thisCountStr) -1):
            result += (j+1)
print(result)