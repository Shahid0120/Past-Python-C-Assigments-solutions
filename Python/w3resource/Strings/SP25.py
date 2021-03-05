"""
Write a Python program to create a Caesar encryption
"""
# input write a string and shift
def CeasureShift(char, shift):
    shift = int(shift)
    x = 0
    lower_case = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    upper_case = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    if char.isupper() == True:  
        for n in upper_case:
            if n == char:
                y = x + shift
                char = upper_case[y]
                return char
            x = x + 1
    elif char == ' ':
        return char
    elif char.islower() == True:
        for n in lower_case:
            if n == char:
                y = x + shift
                char = lower_case[y]
                return char
            x = x + 1
#main input
string_1 = input("Enter a string of char: ")
shift = input("now Enter a Ceasar Shift: ")
 # output 
for n in string_1:   
    print(CeasureShift(n, shift))
