from math import sqrt

class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        if num<=1:
            return False
        sum=1
        for i in range(2,int(sqrt(num))+1):
            if num%i==0:
                sum+=i
                print(sum)
                if i!=num:
                    sum+=num//i
                    print(sum)
        return sum==num
    
if __name__ == "__main__":
    sol = Solution()                
    print(sol.checkPerfectNumber(28))



# Example 1:

# Input: num = 28
# Output: true
# Explanation: 28 = 1 + 2 + 4 + 7 + 14
# 1, 2, 4, 7, and 14 are all divisors of 28.