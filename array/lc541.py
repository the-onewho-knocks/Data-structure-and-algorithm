# class Solution:
#     def reverseStr(self, s: str, k: int) -> str:
#         s = list(s)
#         for i in range(0 , len(s) , 2 * k):
#             s[i : i + k] = reversed(s[i : i + k])
#             print(s)
#         return "".join(s)
    
# if __name__ == "__main__":
#     sol = Solution()
#     y = sol.reverseStr("abcdefg" , 2)
#     print(y)
#     if y == "bacdfeg":
#         print(True)
#     else : print(False)

s ="abcdefg"
k = 2
l = []
print(s[0:8])
for i in range(0 , len(s),2):
    l.append( [s[i : i + k]])
print(l)
print(l[0][0])
print(l[0][0][0])