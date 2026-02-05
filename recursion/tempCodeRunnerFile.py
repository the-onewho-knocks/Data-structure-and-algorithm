class Solution:
    def function(s , left , right):
        if left >= right:
            return True
        if s[left] != s[right]:
            return False
        return function(s , left + 1 , right - 1)

if __name__ == "__main__":
    sol = Solution()
    n = "nitin"
    print(sol.function(n , 0 , len(n)-1))