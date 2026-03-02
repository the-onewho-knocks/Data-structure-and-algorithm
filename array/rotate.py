nums = [5,-2,3,9,0,6,10,7]
#output [7 , 5,-2,3,9,0,6,1]

n = len(nums)
print(n-1)
nums[:] = [nums[-1]] + nums[0:n-1] #0:7 index that is it will go till 6th index
print(nums)