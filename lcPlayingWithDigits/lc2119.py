class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        n = self.reverse(num)
        p = self.reverse(n)
        if p == num:
            return True
        else:
            return False
    
    def reverse(self , n):
        result = 0
        while n > 0:
            lastdigit = n % 10
            result = (result * 10) + lastdigit
            n //= 10
        return result




# class Solution:
#     def isSameAfterReversals(self, num: int) -> int:
#         # if num == 0:
#         #     return True
#         result = 0
#         while num > 0:
#             lastdigit = num % 10
#             result = (result * 10) + lastdigit
#             num //= 10
#         print(result)
        
# if __name__ == "__main__":
#     sol = Solution()
#     print(sol.isSameAfterReversals(1800))




# def reverse(num):
#     result = 0
#     while num > 0:
#         lastdigit = num % 10
#         result = (result * 10) + lastdigit
#         num //= 10
#   #  print(result)
#     return result

# if __name__ == "__main__":
#     n = reverse(1800)
#     print(n)
#     p = reverse(n)
#     print(p)


