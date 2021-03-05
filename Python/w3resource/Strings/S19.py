"""
Write a Python program to get the last part of a string 
before a specified character. Go to the editor
https://www.w3resource.com/python-exercises
https://www.w3resource.com/python
"""
# input is a website code
# process find '-' and removes the remaining code
# outputs the the new string

string_1 = input("Enter a webstie: ")
x = 0

for n in string_1: 
    if string_1[x] == '-':
        #remove the rest of the string
        print("shit")
        # embeded for loop for removing all char after '-'
        k = x
        for n in string_1[k:]:
            string_1 = string_1.replace(n, '')
            k = k + 1
    x = x + 1

print("the website is now : {}".format(string_1))