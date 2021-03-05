"""
Write a Python program to swap comma and dot in a string. 
Sample string: "32.054,23"
Expected Output: "32,054.23"
"""

# Program changed '.' to ','
def Convert(string1):
    list1 = []
    list2 = []
    list1[:0] = string1
    x = 1
    k = 0 
    for n in list1:
        if n == '.':
            # convert the string into a new string
            list2[k :x] = ','
        elif n == ',':
            list2[k:x] = '.'
        else: 
            list2[k:x] = list1[k:x]
        x = x + 1
        k = k + 1
    return list2 

#driver program 
string_1 = input("Enter a String: ")
print(*Convert(string_1), sep = '')