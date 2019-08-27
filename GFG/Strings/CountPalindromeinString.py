s = "abbaeae"
count = 0
for i in range(0,len(s)+1):
    for j in range(i+1,len(s)+1):
        k = s[i:j]
        if k == k[::-1] and len(k) >=2:
            count+=1

print(count)