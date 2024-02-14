import math
q = int(input())
arr = [int(i) for i in input().split(' ')]
def kmm_2(a,b):
    return (a*b)//math.gcd(a,b)
def kmm_(arr):
    if len(arr)>=2:
        m = kmm_2(arr[0],arr[1])
        for i in range(2,len(arr)):
            m=kmm_2(m,arr[i])
        return m
    else:
        return arr[0]
if 0 not in arr:
    kmm = kmm_(arr)
    if kmm==0:
        print(0)
    else:
        print(math.floor(1000/kmm))
else:
    print(0)
