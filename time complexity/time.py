n = 5873

str = str(n)


for i in range(len(str)):
    p = n % 10
    n = int(n / 10)
    print(p)

# n = 5873

# num = n
# while num>0:
#     extracted = num % 10
#     print(extracted)
#     num = num // 10
#     if extracted == 0:
#         break