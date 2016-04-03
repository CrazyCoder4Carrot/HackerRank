import math
count = int(raw_input())
for _ in range(count):
    low, high = map(int, raw_input().split())
    count = 0
    for i in range(low, high + 1):
        if math.sqrt(i) in range(0, i + 1):
            count += 1
    print count