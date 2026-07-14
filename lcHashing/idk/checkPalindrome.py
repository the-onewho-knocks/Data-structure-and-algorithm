def check(n):
    num = n
    result = 0

    while num > 0:
        lastDigit = num % 10
        result = (result * 10) + lastDigit
        num = num // 10

    if n == result:
        print("number is palindrome")
    else:
        print("number is not palindrome")

check(1771)
