nums = [5 , 7, 3 ,2 ,6 , 1 ,5 , 9]
left = 2
right = 5

nums[left:right+1] = nums[left:right+1][::-1]

print(nums)

while left < right:
    nums[left] , nums[right+1] = nums[right+1] , nums[left]
    left += 1
    right -= 1
print(nums)
