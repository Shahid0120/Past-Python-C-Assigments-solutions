"""
27. Write a Python program to remove existing indentation from all of the lines in a given text. Go to the editor

"""

string_1 = input("Enter a string: ")
string_1.expandtabs(tabsize = 0)
print(string_1)
