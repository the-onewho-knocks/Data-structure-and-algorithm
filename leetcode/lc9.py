class Solution:
    def isPalindrome(self, x: int) -> bool:
        num = x
        result = 0
        while x>0:
            lastDigit = x % 10     #1 #2 #1
            result = (result * 10) + lastDigit #0 x 10 + 1 = 1 #1 x 10 + 2 = 12 #12 x 10 + 1 = 121
            x //= 10 #12 #1
        if result == num:   # 121 == num  (true)
            return True
        else:
            return False