

"""
def Copies(string_1):
    for n in string_1: 
        if n == string_1[-1] or n == string_1[-2]:
            if n == string_1[-1]:
                second_last_char = string_1[-1]
            else:
                last_char = string_1[-2]
    x = last_char + second_last_char
    return x

CString = input("Enter a String: ")
x = Copies(CString)
print("{}{}{}{}".format(x,x,x,x,x))
"""

def insert_end(str):
    sub_str = str[-2:]
    return sub_str * 4

print(insert_end('Python'))
print(insert_end('Exercises'))

"""
Always try to find the shortest methods
You can times string to multiple the string 
str[-2: ] is easier than doing it seprately
"""