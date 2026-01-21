from math import sqrt
x = 28
result = []
for i in range(1 ,20):
    if x % i == 0:
        result.append(i)
    # if x // i != i:
    #     result.append(x // i)
print(result)