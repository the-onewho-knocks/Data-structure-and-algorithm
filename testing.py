# Input:  nums = [3, 2, 3, 4, 3, 5], x = 3
# Output: [2, 4, 5, 3, 3, 3]
#       0  1  2  3  4  5
# nums = [3, 2, 3, 4, 3, 5]
# x = 3
# left = 0
# for right in range(len(nums)):
#     if nums[right] != x:
#         nums[left] , nums[right] = nums[right] , nums[left]
#         left += 1
# print(nums)

nums = [1, 2, 0, 3, 0, 4]
x = 0

left = 0
for right in range(len(nums)):
    if nums[right] == x:
        nums[right] , nums[left] = nums[left] , nums[right]
        left += 1

print(nums)