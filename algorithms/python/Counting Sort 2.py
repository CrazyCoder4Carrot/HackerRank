# Enter your code here. Read input from STDIN. Print output to STDOUT
# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
raw_input()
lista = map(int, raw_input().split())
countlist = [0] * 100
for val in lista:
    countlist[val] += 1
for i in range(len(countlist)):
    while countlist[i] > 0:
        print i,
        countlist[i] -= 1