import os 
import sys

        
test_c=int(input())
for _ in range(test_c):
    n=int(input())
    arr=[]
    flat_arr=[]
    for _ in range(n):
        t=list(map(int,input().split()))
        arr.append(t)
        flat_arr.extend(t)
    pos_arr=[]
    for i in range(len(arr)):
        for j in range(len(arr)):
            pos_arr.append(i+j)
    print(*flat_arr)
    print(*pos_arr)
    