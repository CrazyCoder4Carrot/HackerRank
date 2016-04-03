import sys


t = int(raw_input().strip())
for _ in xrange(t):
    n,c,m = map(int, raw_input().strip().split(' '))
    count = n / c 
    temp = count
    while temp > m :
    	count += temp 
    	temp -= m
   	print count
