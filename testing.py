# Input:  nums = [3, 2, 3, 4, 3, 5], x = 3
# Output: [2, 4, 5, 3, 3, 3]
#       0  1  2  3  4  5
# nums = [3, 2, 3, 4, 3, 5]
# x = 3
# left = 0
# for right in range(len(nums)):
#     if nums[right] != x:
#         nums[left] , nums[right] = nums[right] , nums[left]
#         left += 1
# print(nums)

# nums = [1, 2, 0, 3, 0, 4]
# x = 0

# left = 0
# for right in range(len(nums)):
#     if nums[right] == x:
#         nums[right] , nums[left] = nums[left] , nums[right]
#         left += 1

# print(nums)

# from typing import List


# s = ["h","e","l","l","o"]

# class Solution:
#     def reverseString(self, s: List[str]) -> None:
#         """
#         Do not return anything, modify s in-place instead.
#           [start:stop:step]
#         """
# k = len(s)
# first = s[1:]
# last = s[:1]
# print(last)

# s = "abcdefg"
# k = 2
# print(s[1:1+k])
# result = []
# for i in range(0, len(s), k):
#     result.append(s[i:i+k])

# print(result)

# a = "nitinq"
# left = 0
# right = len(a)-1

# while right > left:
#     if a[left] != a[right]:
#         print(False)
#         break
#     left += 1
#     right -= 1
# print(True)

# l = []
# for i in reversed(a):
#     l.append(i)

# c = "".join(l)
# if a == c:
#     print(True)
# else:
#     print(False)

# squares = [x*x for x in range(5)]
# print(squares)

# class Solution:
#     def validPalindrome(self, s: str) -> bool:
#         k = list(s)
#         left = 0
#         right = len(s)-1
#         for i in k:
#             if k[left] != k[right]:
#                 k.remove(left)
#             left += 1
#             right -= 1
#         a = "".join(k)
#         return a == a[::-1]

# if __name__ == "__main__":
#     sol = Solution()
#     print(sol.validPalindrome("abca"))

# s = "cbbcc"
# k = list(s)
# left = 0
# right = len(k)-1
# while left < right:
#     if k[left] != k[right]:
#         k.remove(k[left])
#     left += 1
#     right -= 1
# l = "".join(k)
# if l == l[::-1]:
#     print(True)
# else:
#     print(False)

# n = 10
# seq = [0, 1]
    
#     # We use a loop to calculate the rest
#     # We start from '2' because we already have index 0 and 1
# for i in range(2, n):
#         # Add the last two numbers together
#     next_number = seq[i-1] + seq[i-2]
#         # Put the new number at the end of our list
#     print(next_number)
#     seq.append(next_number)
# #print(seq)

# largest = float("-inf")
# s_largest = float("-inf")

# for i in range(0 , len(nums)):
#     if nums[i]> largest:
#         s_largest = largest
#         largest = nums[i]
#     elif nums[i] > s_largest and nums[i] != largest:
#         s_largest = nums[i]
# print(s_largest)


# largest = float("-inf")
# s_largest = float("-inf")
# t_largest = float("-inf")
# for i in range(0 , len(nums)):
#     if nums[i]>largest:
#         s_largest = largest
#         t_largest = s_largest
#         largest = nums[i]
#     elif nums[i]> s_largest and nums[i] != largest:
#         s_largest = nums[i]
#     elif nums[i]>t_largest and nums[i] != s_largest:
#         t_largest = nums[i]
# print(t_largest)

# for i in range(0 , len(nums)):
#     if nums[i] > largest:
#         largest = nums[i]
# print(largest)

# for i in range(0 , len(nums)):
#     if nums[i] > s_largest and nums[i] != largest:
#         s_largest = nums[i]
# print(s_largest)

# for i in range(0 , len(nums)):
#     if nums[i] > t_largest and nums[i] != largest and nums[i] != s_largest:
#         t_largest = nums[i]
# print(t_largest) 
##

nums = [3, 2, 30, 45, 3, 50]

for i in range(0 , len(nums)-1):
    if nums[i] > nums[i+1]:
        print(False)
print(True) 

#ok here we go again