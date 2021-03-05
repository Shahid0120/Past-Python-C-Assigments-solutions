

""""
Convert a string into a list
"""
def Convert(string): 
    list1=[] 
    list2 = []
    list1[:0] = string
    x = 1
    k = 0
    for n in list1:
        if n != ' ':
            # how to do this wihout function
            list2[k:x] = n
        x = x + 1
        k = k + 1
    return list2

# Driver code 
str1 = input("Enter a string: ")
print(Convert(str1))
    

