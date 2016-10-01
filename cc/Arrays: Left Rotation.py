def array_left_rotation(a, n, k):
    if k == n or k == 0:
        return n
    k = k % n
    return a[k:] + a[0:k]

n, k = map(int, raw_input().strip().split(' '))
a = map(int, raw_input().strip().split(' '))
answer = array_left_rotation(a, n, k);
print ' '.join(map(str,answer))
