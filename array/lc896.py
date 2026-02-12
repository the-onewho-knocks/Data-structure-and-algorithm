from typing import List

class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        increasing = True   #true   #false
        decreasing = True   #false  #true

        for i in range(0, len(nums) - 1):
            if nums[i] > nums[i + 1]:
                increasing = False
            if nums[i] < nums[i + 1]:
                decreasing = False

        return increasing or decreasing
    
if __name__ == "__main__":
    sol = Solution()
    print(sol.isMonotonic([1,2,3]))