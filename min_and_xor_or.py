# min xor question , variaton

test_c=int(input())
for _ in range(test_c):
    n=int(input())
    arr=list(map(int,input().split()))
    mini=1000000000000
    arr=sorted(arr)
    for i in range(n-1):
        res=arr[i]^arr[i+1]
        mini=min(res,mini)
    print(mini)            
