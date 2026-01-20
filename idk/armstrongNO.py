x = 153
nod = len(str(x))
result = 0
for i in range(nod):
    lastDigit = x % 10
    result += (lastDigit)**nod
    x //= 10
    print(result)