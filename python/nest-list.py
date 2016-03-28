count = int(raw_input(""))
scorelist = list()
for i in range(count):
    scorelist.append([raw_input(""),raw_input("")])
scorelist.sort(reverse=True)
print scorelist
print scorelist.pop()
print scorelist
score = scorelist[0][1]
print score
for item in scorelist:
    if score == item[1]:
        print item[0]
