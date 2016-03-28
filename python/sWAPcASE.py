s = raw_input("")
for c in s:
    if isupper(c):
        c = c.lower()
    else:
        c = c.upper()
print s

