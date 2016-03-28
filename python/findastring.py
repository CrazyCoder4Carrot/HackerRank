string = raw_input("")
substring = raw_input("")
count = 0
for i in  range(len(string)):
    if string[i:i + len(substring)] == substring:
        count += 1

print count
