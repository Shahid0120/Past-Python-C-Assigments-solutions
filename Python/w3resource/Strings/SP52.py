

"""
All list of combinations withouht distinct values of a list of strings

"""
#functions
def Combination(string, k,list1):
    list2 = []
    x = 1
    for n in list1:
        list2[:x] = n
        k = x
        int(k)
        z = 0
        if list2 != list1:
            for k in list1:
                list2[z:3] = list1[z:k]
                z = z + 1
                k = k + 1
        x = x + 1
    return list2


#driver functions

string_1 = input("Enter a list of string you want to find all combinations for: ")
list1 = []
n = 0
p = 0
int(n)
int(p)
list1[:0] = string_1
#counts the lenght of the string
for n in list1: 
    p = p + 1

for n in list1:
    print(Combination(string_1,p, list1))

