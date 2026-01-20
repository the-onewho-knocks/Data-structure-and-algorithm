n = 234

nod = len(str(n))

sod = 0
pod = 1

for i in range(nod):
    lastdigit = n % 10 #4 #3 #2
    sod =sod + lastdigit  #0 + 4    #4 + 3 = 7    # 7 + 2 = 9
    pod = pod * lastdigit
    n//=10
print(sod)
print(pod)

