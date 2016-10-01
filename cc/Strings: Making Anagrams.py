import collections
def number_needed(a, b):
    temp = collections.defaultdict(int)
    for c in a:
        temp[c] += 1
    res = 0
    for c in b:
        if temp[c] != 0:
            res += 1
            temp[c] -=1
    return len(a) + len(b) - 2 * res
            
            

a = raw_input().strip()
b = raw_input().strip()

print number_needed(a, b)
