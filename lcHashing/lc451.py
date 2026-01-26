# Example 1:

# Input: s = "tree"
# Output: "eert"
# Explanation: 'e' appears twice while 'r' and 't' both appear once.
# So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
# Example 2:

# Input: s = "cccaaa"
# Output: "aaaccc"
# Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
# Note that "cacaca" is incorrect, as the same characters must be together.
# Example 3:

# Input: s = "Aabb"
# Output: "bbAa"
# Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
# Note that 'A' and 'a' are treated as two different characters.


s = "aAbb"
hashmap = {}
result = []

for i in s:
    hashmap[i] = hashmap.get(i , 0)+1

a = list(hashmap.items())
a.sort(key=lambda x : x[1] , reverse=True)

for ch , count in a:
    result.append(ch * count)

print("".join(result))

# s = "tree"
# a = []
# hashmap ={}
# for i in s:
#     hashmap[i] = hashmap.get(i , 0)+1
# print(hashmap)

# b = list(hashmap.items())
# # b.sort(key=lambda b:b[0])
# # print(b)
# b.sort(key=lambda b:b[1] ,reverse=True)
# print(b)

# result = []
# for ch, count in b:
#     result.append(ch * count)

# x = "".join(result)
# print(x)

