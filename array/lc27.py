nums = [0,1,2,2,3,0,4,2]
val = 2
count = 0
while val in nums:
    nums.remove(val)
    count += 1
print(count)