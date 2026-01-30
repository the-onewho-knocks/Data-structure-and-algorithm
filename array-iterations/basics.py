
nums = [3, 1, 5, 2, 4]

# # this patter is for finding min and max value in an array 
max_val = nums[0]

for i in range(len(nums)):
    if nums[i] < max_val:       # this is magic for finding max or minium value in arr
        max_val = nums[i]

#print(max_val)


##directions we can traverse in an arr
arr = [-5,-4,-3,-2,-1,0,1,2,3,4,5]
start = arr.index(0)
end = arr[10]
#print(end)
for i in range(start , len(arr)):
   print()


o = [0 , 1 , 0 , 3 , 12 , 0]
left = 0

for right in range(len(o)):
    if o[right] != 0:
        o[left] , o[right] = o[right] , o[left]
#0        #0          #1          #0         #1         [1,0,0,3,12,0]
#1        #0        #3          #0          #3          [1 , 3, 0 , 0 , 12, 0]
#2       #0         #12         #0          #12         [1,3,12,0,0,0]
        left+=1
print(o)