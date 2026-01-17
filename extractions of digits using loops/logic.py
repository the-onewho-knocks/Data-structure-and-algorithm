import math
#this logic would be used in many questions actually 
#such as count digits , reverse a number , check palindrome and armstrong number
n = 5873

num = n
while num>0:
    extracted = num % 10
    print(extracted)
    num = num // 10
    if extracted == 0:
        break

#now return the count
n = 5438
num = n
count = 0
while num >0:
    count = count + 1
    num = num // 10
print(count) 
# this way requires more time complexity i guess so theres a simple way
#we use math library for this

result = int(math.log10(n)+1)
print(result)
#this is actully goated way