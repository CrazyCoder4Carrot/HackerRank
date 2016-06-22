# Enter your code here. Read input from STDIN. Print output to STDOUT
def quicksort(A, lo, hi):
    if lo >= hi:
        return
    p = partition(A, lo, hi)
    print " ".join(map(str, A))
    quicksort(A, lo, p-1)
    quicksort(A, p+1, hi)
def partition(A, lo, hi):
    key = A[hi]
    i = lo - 1
    for j in range(lo, hi):
        if A[j] <= key:
            i += 1
            A[i], A[j] = A[j], A[i]
    A[i + 1], A[hi] = A[hi], A[i+1]
    return i + 1
raw_input()
lista = map(int, raw_input().split())
quicksort(lista, 0, len(lista) - 1)