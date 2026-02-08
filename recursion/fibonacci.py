# class Solution:
#     def func(self , num):
#         if num == 1 or num == 0:
#             return num
#         return self.func(num-1) + self.func(num - 2)

#     def fib(self, n: int) -> int:
#         ans = self.func(n)
#         return ans
    

# class Solution:
#     def fib(self, n: int) -> int:
        
#         a, b = 0, 1

#         for i in range(0, n):
#             a, b = b , b + a
        
#         return a

a = [x**2 for x in range(11)]
print(a)

for x in range(3): print(x)