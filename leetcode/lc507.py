class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        sum = 0
        for i in range(1 , num):
            if num % i == 0:
                sum += i
        return sum == num

if __name__ == "__main__":
    sol = Solution()                
    print(sol.checkPerfectNumber(28))