# Input: arr = [17,18,5,4,6,1]
# Output: [18,6,6,6,1,-1]
# Explanation: 
# - index 0 --> the greatest element to the right of index 0 is index 1 (18).
# - index 1 --> the greatest element to the right of index 1 is index 4 (6).
# - index 2 --> the greatest element to the right of index 2 is index 4 (6).
# - index 3 --> the greatest element to the right of index 3 is index 4 (6).
# - index 4 --> the greatest element to the right of index 4 is index 5 (1).
# - index 5 --> there are no elements to the right of index 5, so we put -1.

# from typing import List


# class Solution:
#     def replaceElements(self, arr: List[int]) -> List[int]:
#         left = 0
#         k = []
#         # for right in range(1 , len(arr)+1):
#         #     if arr[left] > arr[right]:
#         #         k.append(arr[right])
#         #     left += 1
#         #     print(k)

#         for index , value in enumerate(arr):
#             if value > value + 1:
#                 index = arr[index + 1]

# if __name__ == "__main__":
#     sol = Solution()
#     print(sol.replaceElements([17,18,5,4,6,1]))

# Output: [18,6,6,6,1,-1]
arr = [17,18,5,4,6,1]
# #,5,4,6,
# k = []
# left = 0
# print(arr[1])
# for right in range(1 ,len(arr)+1):
#     if arr[left] < arr[right]:
#         k.insert(arr[right])
#         arr.remove(arr[left])
# print(arr)
# print(k)


# max_right = -1

# for i in range(len(arr) - 1, -1, -1):
#     current = arr[i]
#     arr[i] = max_right
#     max_right = max(max_right, current)

# print(arr)

s = "hello"
print(s[1:])
print(s[:2])