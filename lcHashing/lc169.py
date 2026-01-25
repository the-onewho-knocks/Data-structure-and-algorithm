# Given an array nums of size n, return the majority element.

# The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

# Example 1:

# Input: nums = [3,2,3]
# Output: 3

# Example 2:
# Input: nums = [2,2,1,1,1,2,2]
# Output: 2

nums = [6,5,5]
hashmap = {}
n = len(nums)                                       #3
for i in nums:
    hashmap[i] = hashmap.get(i , 0)+1               #{6: 1, 5: 2}
    if hashmap[i] > n//2:                           #   6 > (3/2)= true
        print(i)           
print(hashmap[i])                         # 

print(hashmap[6])