# Enter your code here. Read input from STDIN. Print output to STDOUT
raw_input()
lista = map(int, raw_input().split())
count = 0
for i in range(1, len(lista)):
    val = lista[i]
    j = i - 1
    while j >= 0 and lista[j] > val:
        lista[j + 1] = lista[j]
        j -= 1
        count += 1
    lista[j+1] = val
print count