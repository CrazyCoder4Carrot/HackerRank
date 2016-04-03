import sys


n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' '))
while(len(arr) != 0):
	print len(arr)
	arr = filter(lambda x: x != 0, map(lambda x: x - min(arr), arr))