"""
Write a Python program to remove the characters 
which have odd index values of a given string. 
"""
# input : type in a string
# process: removes all characters with a odd index value
# prints the new string out 
"""
def OddIndexRemoval(string_):
    x = 0
    for n in string_: 
        if (x + 1) % 2 == 0: 
            #it will remove that index of code 
            string_ = string_.replace(n, '')
        x = x + 1
    return string_

string_1 = str(input("type in a string: "))

print(OddIndexRemoval(string_1))


"""
def odd_values_string(str):
    result = ''
    for i in range(len(str)):
        if i % 2 == 0:
            result = result + str[i]
    return result

print(odd_values_string('abcdef'))
print(odd_values_string('python'))




