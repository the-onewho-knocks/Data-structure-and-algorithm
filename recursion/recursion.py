
# def func(i ,n):
#     if i > n:
#         return
#     func(i+1, n)
#     print(n-i+1)

#functional recursion 

# def func(n):

#     if n == 1:
#         return 1

#     return func(n * n - 1)
    


# if __name__ == "__main__":
#     print(func(5))


def func(n):
    if n == 1 or n == 0:
        return 1
    return n * func(n - 1)

if __name__ == "__main__":
    print(func(5))