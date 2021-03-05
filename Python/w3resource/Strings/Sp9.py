

"""

Write a Python program to remove the 
nth index character from a nonempty string. 

"""
# Input : Empyty string
# remove: nth string
# output: prints the new string
import random 
string_1 = '0'
string_2 = '1'
string_3 = '2'

list_string = [string_1, string_2, string_3]

#  code genrates we need a random number between 0 and 2
# use that number to remove that from the list and then print out the
# string
# random number generator between 0 and 2 
"""
x = random.randint(0,2)
k = 0
for n in list_string: 
    if k == x: 
        list_string.remove(n)
    k = k + 1

print(list_string)

"""

# for a string remove a character

import random 
x = random.randint(0, 5)
print(x)
string_1 = 'Python'

if x != 5:
    first_part = string_1[:x]
    last_part = string_1[x+1:6]
    string_1 = first_part + last_part
elif x == 5:
    string_1 = 'Pytho'



print("String removal of the nth string now the new string is {} ".format(string_1) )