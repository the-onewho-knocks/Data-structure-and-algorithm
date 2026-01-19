n = 4114

num = n 
result = 0

while n > 0 :
    lastDigit = num % 10
    result =( result * 10 )+ lastDigit
    num = num // 10
    n == result