# nums = [5,6,7,7,7,7,2,3,8,2,8,5,1,3,9,9,1]

# freq_map = {}
# hash_map = {}

# #method 1
# for i in range(0 , len(nums)):
#     if nums[i] in freq_map:
#         freq_map[nums[i]] += 1
#     else:
#         freq_map[nums[i]]=1

# print(freq_map) 


# #method 2 sexy one
# n = len(nums)
# for i in range(0 , n):
#     hash_map[nums[i]] = hash_map.get(nums[i],0)+1

# print(hash_map)

# n = [5,3,2,2,1,5,5,7,5,10]
# m = [10,111,1,9,5,67,2]
# hash_map = {}
# for i in n:
#     hash_map[i] = hash_map.get(i , 0)+1
# print(hash_map)

# for x in m:
#     if x in hash_map.keys():
#         print(hash_map)

# s = "azyzyyszaaa"
# q = ["d","a","u","x"]
# hash_map = {}
# for x in s:
#     hash_map[x] = hash_map.get(x , 0) + 1
# print(hash_map)

# for i in q:
#     if i in hash_map.keys():
#         print(hash_map[i])

nums = [2,7,11,15]
target = 9

seen = {}

for i, n in enumerate(nums):
    need = target - n       # 9 - 2 = 7     #9-7=2
    if need in seen:        # 7 in {}       #2 in {}
        print(seen[need], i)                # yes    (seen[2],1)
        break
    seen[n] = i     # {2:0}                 #{7:0}
print(seen)
