
"""
Write a Python program to find the first appearance of the 
substring 'not' and 'poor' from a given string, if 'not' follows 
the 'poor', replace the whole 'not'...'poor' substring with 'good'. 
Return the resulting string. Go to the editor
Sample String : 'The lyrics is not that poor!'
'The lyrics is poor!'
Expected Result : 'The lyrics is good!'
'The lyrics is poor!'
Click me to see the sample solution

"""
"""
# My try with replace function

line = 'The lyrics is not that poor!\nThe lyrics is poor!'

y = line.replace("is not that poor!", "is good!")

print(type(y))
print(y)

"""
"""
# using with functions

def not_poor(str1):
    snot = str1.find('not')
    spoor = str1.find('poor')
  

    if spoor > snot and snot>0 and spoor>0:
        str1 = str1.replace(str1[snot:(spoor+4)], 'good')
        return str1
    else:
        return str1

print(not_poor('The lyrics is not that poor!'))
print(not_poor('The lyrics is poor!'))

"""
# how to replace words in string withu any functions
# you can replace a characters in a string as string --> immutable

def changeCar(ch):
    for x in ch:    
        if ch == "not that poor!":
            new_string = 'THe lyrics is very good!'
    return new_string

print(changeCar("The lyrics is not that poor!"))
