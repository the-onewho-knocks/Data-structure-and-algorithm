strs = ["eat","tea","tan","ate","nat","bat"]
hashMap = {}
for i in strs:
    hashMap[i] = hashMap.get(i , 0) + 1
print(hashMap)
