class Solution:
    def reverse(self, x: int) -> int:
        sign = -1 if x < 0 else 1
        num = abs(x)

        result = 0
        while num > 0:
            lastDigit = num % 10
            result = result * 10 + lastDigit
            num //= 10

        return sign * result