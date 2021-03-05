
cases = int(input())

NameScorelist = []
for n in range(cases):
    name = input()
    score = input()
    NameScorelist.append([name,score])

NameWanted = input()

for n in NameScorelist:
    if n == NameWanted:
        print("Shit")
    



