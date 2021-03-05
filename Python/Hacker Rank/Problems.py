"""
cases=int(input())
a=[]
mini=10000000000000000000
secondMini=10000000000000000
for i in range(cases):
    name=input()
    score=float(input())
    if(score<mini):
        secondMini=mini
        mini=score
    if(score<secondMini and score>mini):
        secondMini=score
    a.append([name,score])
a=sorted(a)
for i in a:
    if(i[1]==secondMini):
        print(i[0])

"""

cases = int(input())

NameScorelist = []
for n in range(cases):
    name = input()
    score = float(input())
    NameScorelist.append([score,name])



k = max(NameScorelist)
print(k)
i = 0
# removes all highest numebr if there is multiple
while NameScorelist.count(k) > 0: 
    for n in NameScorelist:
        if n == max(NameScorelist):
            continue
        # finds the position of the score
    i = i + 1
    NameScorelist.remove(max(NameScorelist))

print(NameScorelist)
p = max(NameScorelist)
print(p)

print(NameScorelist[score:])
    