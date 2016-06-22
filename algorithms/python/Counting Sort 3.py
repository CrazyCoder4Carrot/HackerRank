num = int(raw_input())
lista = []
res = [0] * 100
for _ in range(num):
    m, n = raw_input().split()
    lista.append(int(m))
for val in lista:
    res[val] += 1
for i in range(1, len(res)):
    res[i] += res[i-1]
print " ".join(map(str, res))