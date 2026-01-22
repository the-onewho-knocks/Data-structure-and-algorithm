# Example 1:

# Input: n = 12, k = 3
# Output: 3
# Explanation: Factors list is [1, 2, 3, 4, 6, 12], the 3rd factor is 3.'

# Example 2:
# Input: n = 7, k = 2
# Output: 7
# Explanation: Factors list is [1, 7], the 2nd factor is 7.

# Example 3:
# Input: n = 4, k = 4
# Output: -1
# Explanation: Factors list is [1, 2, 4], there is only 3 factors. We should return -1.

# n = 12 
# k = 3
# result = []

# for i in range(1 , n+1):
#     if n % i == 0:
#         result.append(i)
#     print(result)

# print(result[k-1])

#this is the brut force soultion 
class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        result = []
        for i in range(1 , n+1):
            if n % i == 0:
                result.append(i)
        if k <= len(result):
            return result[k-1]
        else:
            return -1
    
if __name__ == "__main__":
    sol = Solution()                
    print(sol.kthFactor(12,3))