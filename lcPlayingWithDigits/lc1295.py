# Example 1:

# Input: nums = [12,345,2,6,7896]
# Output: 2

# Explanation: 
# 12 contains 2 digits (even number of digits). 
# 345 contains 3 digits (odd number of digits). 
# 2 contains 1 digit (odd number of digits). 
# 6 contains 1 digit (odd number of digits). 
# 7896 contains 4 digits (even number of digits). 
# Therefore only 12 and 7896 contain an even number of digits.

# Example 2:
# Input: nums = [555,901,482,1771]
# Output: 1 
# Explanation: 
# Only 1771 contains an even number of digits.

nums =[555,901,482,1771]
n = 0
result = []
count = 0

for i in nums:
    digits = len(str(i))
    if digits // 2 != 0:
        continue
    count+=1
print(count)


# for i in nums:
#     lastdigit = i % 10
#   #  print(lastdigit)
#     n = (n * 10) + lastdigit
#     i//=10
#     print(n)
#     count += 1
 
#   #  print(count)
#     if count > 2:
#         continue
#     elif count == 2:
#         result.append(i)
#     count = 0
# print(result)

# while n > 0:
#     lastdigit = n % 10
#     count += 1
#     n //= 10
# print(count)

