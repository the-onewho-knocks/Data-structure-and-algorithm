# Example 1:
# Input: nums = [1,2,3,1]
# Output: true
# Explanation:
# The element 1 occurs at the indices 0 and 3.

# Example 2:
# Input: nums = [1,2,3,4]
# Output: false
# Explanation:
# All elements are distinct.

# Example 3:
# Input: nums = [1,1,1,3,3,4,3,2,4,2]
# Output: true

# nums = [2,14,18,22,22]
# hash_map = {}

# for i in nums:
#     hash_map[i] = hash_map.get(i,0)+1

# for k in hash_map.values():
#     if k>1:
#         print(k)

from typing import List


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hash_map = {}
        for i in nums:
            hash_map[i] = hash_map.get(i , 0)+1
        print(hash_map)
            
        for k in hash_map.values():
            print(k)
            if k>1:
                return True
        return False
if __name__ == "__main__":
    sol = Solution()
    print(sol.containsDuplicate([2,14,18,22,22]))