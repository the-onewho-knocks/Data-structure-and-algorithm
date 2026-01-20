class Solution:
    def addDigits(self, num: int) -> int:
        while num > 10:
            current_sum = 0

            while num > 0:
                lastDigit = num % 10  # 8     #
                current_sum += lastDigit  # 0 = 0 + 8 = 8
                num //= 10  # 38 / 10 = 3.8 = 3
            num = current_sum  # num = 8
            
        return num


if __name__ == "__main__":
    sol = Solution()
    print(sol.addDigits(38))

# x = 38
# result = 0
# while x > 0:
#     lastDigit = x % 10  # 8 #3
#     sum = lastDigit  # 8 #3
#     result = result + sum  # 0 + 8 = 8 # 8 + 3 = 11
#     x = x // 10  # 3 # 1
#     if result > 0:
#         lastDigit = x % 10
#         sum = lastDigit
#         result = result + sum
#         result = result // 10
# print(result)
