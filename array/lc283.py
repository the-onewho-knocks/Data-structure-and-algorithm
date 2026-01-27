# nums = [0,1,0,3,12]
# for i in nums:
#     if i == 0:
#         nums.pop(nums[i])
#         nums.append([i])
# print(nums)

# nums = [0,0,1]

# for i , v in enumerate(reversed(nums)):
#     if v == 0:
#         nums.pop(i)
#         nums.append(0)
# print(nums)

# nums =  [0,0,1]
# for i in reversed(nums):
#     if nums[i] == 0:
#         nums.pop(i)
#         nums.append(0)
# print(nums)

from typing import List


class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zerocount=0
        while 0 in nums:
            nums.remove(0)
            zerocount+=1
        return nums.extend([0]*zerocount)