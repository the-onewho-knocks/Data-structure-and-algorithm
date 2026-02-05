# class Solution:
#     def function(s , left , right):
#         if left >= right:
#             return True
#         if s[left] != s[right]:
#             return False
#         return function(s , left + 1 , right - 1)

# if __name__ == "__main__":
#     sol = Solution()
#     n = "nitin"
#     print(sol.function(n , 0 , len(n)-1))

class Solution:
    def function(self, s, left, right):
        # Base case: pointers crossed or met
        if left >= right:
            return True
        # Mismatch found
        if s[left] != s[right]:
            return False
        # Move both pointers inward
        return self.function(s, left + 1, right - 1)

if __name__ == "__main__":
    sol = Solution()
    n = "nitin"
    print(sol.function(n, 0, len(n) - 1))

# class Solution:
#     def function(self, s, left, right):
#         if left >= right:
#             return True
#         if s[left] != s[right]:
#             return False
#         return self.function(s, left + 1, right - 1)

# sol = Solution()
# print(sol.function("nitin", 0, len("nitin") - 1))
