from math import sqrt
# Example 1:

# Input: a = 12, b = 6
# Output: 4
# Explanation: The common factors of 12 and 6 are 1, 2, 3, 6.
# Example 2:

# Input: a = 25, b = 30
# Output: 2
# Explanation: The common factors of 25 and 30 are 1, 5.

# a = 12
# b = 6

# a_list = []
# b_list = []
# result = []

# for i in range(1 ,int((a))):
#     if a % i == 0:
#         a_list.append(i)
# print(a_list)

# for i in range(1 ,int((b))+1):
#     if int(b % i) == 0:
#         b_list.append(i)
# print(b_list)

# for i in a_list:
#     for j in b_list:
#         if i == j:
#             result.append(i)
# print(len(result))

from math import sqrt

class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        a_list = []
        b_list = []
        result= []
        for i in range(1 , int((a))+1):
            if a % i == 0:
                a_list.append(i)
                print(a_list)

        for i in range(1 , int((b))+1):
            if b % i == 0:
                b_list.append(i)
                print(b_list)

        for i in a_list:
            for j in b_list:
                if i == j:
                    result.append(i)
        return len(result)
    
if __name__ == "__main__":
    sol = Solution()                
    print(sol.commonFactors(885,885))


#optimal solution is this
# from math import sqrt

# class Solution:
#     def commonFactors(self, a: int, b: int) -> int:
#         count = 0
#         x = min(a, b)

#         for i in range(1, int(sqrt(x)) + 1):
#             if a % i == 0 and b % i == 0:
#                 count += 1
#                 if i != x // i and a % (x // i) == 0 and b % (x // i) == 0:
#                     count += 1
#         return count

# if __name__ == "__main__":
#     sol = Solution()
#     print(sol.commonFactors(12, 6))  # output: 4
