# Example 1:

# Input: nums = [4,3,2,7,8,2,3,1]
# Output: [2,3]
# Example 2:

# Input: nums = [1,1,2]
# Output: [1]
# Example 3:

# Input: nums = [1]
# Output: []
 
# nums = [4,3,2,7,8,2,3,1]
# hashmap = {}
# for i in nums:
#     hashmap[i] = hashmap.get(i , 0)+1
# print(hashmap)

# for i , v in hashmap.items():
#     if v > 1:
#         print(i)

from typing import List


class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        hashmap = {}
        result = []
        for i in nums:
            hashmap[i] = hashmap.get(i , 0)+1

        for i , v in hashmap.items():
            if v > 1:
                result.append(i)
        return result
            

if __name__ == "__main__":
    sol = Solution()
    nums = [4,3,2,7,8,2,3,1]
    print(sol.findDuplicates(nums))