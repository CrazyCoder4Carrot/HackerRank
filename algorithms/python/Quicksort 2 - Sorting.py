#!/bin/python
def quickSort(ar):    
    if len(ar) < 2:
        return ar
    key = ar[0]
    left, right, equal = [], [], []
    for val in ar:
        if key == val:
            equal.append(val)
        if val < key:
            left.append(val)
        if val > key:
            right.append(val)
    sub = quickSort(left) + equal + quickSort(right)
    print " ".join(map(str, sub))
    return sub
m = input()
ar = [int(i) for i in raw_input().strip().split()]
quickSort(ar)
