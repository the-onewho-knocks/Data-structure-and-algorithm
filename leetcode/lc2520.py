# Example 1:
# Input: num = 7
# Output: 1
# Explanation: 7 divides itself, hence the answer is 1.

# Example 2:
# Input: num = 121
# Output: 2
# Explanation: 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.

# Example 3:
# Input: num = 1248
# Output: 4
# Explanation: 1248 is divisible by all of its digits, hence the answer is 4.


class Solution:
    def countDigits(self, num: int) -> int:
        check = num
        count = 0
        while num > 0:
            lastdigit = num % 10
            if lastdigit != 0 and check % lastdigit == 0:
                count += 1
            num //= 10
        return count


# class Solution:
#     def countDigits(self, num: int) -> int:
#         result = []
#         for i in range(2 , num+1 ):
#             if num % i == 0:
#                 result.append(i)
                
#         return result
    
# if __name__ == "__main__":
#     sol = Solution()
#     print(sol.countDigits(1248))

# num = 1248
# check = num
# str = str(num)
# result = []
# for i in range(num):
#     lastdigit = num % 10    #8
#     print(lastdigit)
#     num //= 10
#     if check // lastdigit != 0:
#         result.append(lastdigit)
#     else:
#         break
#     print(result)
# print(len(result))

# while num > 0:
#     lastdigit = num % 10
#     print(lastdigit)
#     num //= 10
#     if check // lastdigit != 0:
#         result.append(lastdigit)
#     print(result)
# print(len(result))

# for i in result:
#     if i == check // lastdigit:
#         continue


# class Solution:
#     def countDigits(self, num: int) -> int:
#         result = []
#         check = num
#         while num > 0:
#             lastdigit = num % 10
#             num //= 10
#             if check // lastdigit != 0:
#                 for i in result:
#                     if i == check//lastdigit:
#                         continue
#                     else:
#                         result.append(lastdigit)
#                         print(result)
#         return len(result)

# if __name__ == "__main__":
#     sol = Solution()
#     print(sol.countDigits(1248))