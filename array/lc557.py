# class Solution:
#     def reverseWords(self, s: str) -> str:
#         thank = []
        
#         for i in reversed(s):
#             thank.append(i)
#         o = "".join(thank)
#         l = o.split()
#         print(l)
#         left = 0
#         right = len(l)-1
#         while right > left:
#             l[left] , l[right] = l[right] , l[left]
#             left += 1
#             right -= 1
#         po =" ".join(l)
#         return po
        
class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        print(words)
        reversed_words = [word[::-1] for word in words]
        print(reversed_words)
        return " ".join(reversed_words)
    
if __name__ == "__main__":
    sol = Solution()
    y = sol.reverseWords("Let's take LeetCode contest")
    print(y)