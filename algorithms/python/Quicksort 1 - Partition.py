#!/bin/python
def partition(ar):   
    key = ar[0]
    smaller = []
    larger = []
    equal = []
    for val in ar:
        if val < key:
            smaller.append(val)
        if val > key:
            larger.append(val)
        if val == key:
            equal.append(val)
    return smaller + equal +larger

m = input()
ar = [int(i) for i in raw_input().strip().split()]
print " ".join(map(str, partition(ar)))