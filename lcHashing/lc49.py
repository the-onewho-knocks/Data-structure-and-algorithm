strs = ["eat","tea","tan","ate","nat","bat"]
hashMap = {}
for i in strs:
    for k in i:
        hashMap[k] = hashMap.get(k , 0)+1

print(hashMap)