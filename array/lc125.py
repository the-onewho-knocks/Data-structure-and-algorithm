class Solution:
    def isPalindrome(self, s: str) -> bool:
        a = "".join(char for char in s if char.isalnum()).lower()
        print(a)
        if a == " ":
            return True
        left = 0
        right = len(a)-1
        while left < right:
            if a[left] != a[right]:
                print(a[left]  , a[right])
                return False
            left += 1
            right -= 1
        return True
    
if __name__ == "__main__":
    sol = Solution()
    print(sol.isPalindrome("A man, a plan, a canal: Panama"))