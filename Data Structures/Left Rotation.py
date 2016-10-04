# Enter your code here. Read input from STDIN. Print output to STDOUT
count, k = map(int, raw_input().split())
arr = map(int, raw_input().split())
if k == len(arr):
    print " ".join(map(str, arr))
else:
    k = k % len(arr)
    print " ".join(map(str, arr[k:] + arr[:k]))