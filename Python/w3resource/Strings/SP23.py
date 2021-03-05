

"""
Python Program that removes one line from the code
"""

string_1 = "i love people\n i love people\n i love people"
x = 0 
for n in string_1: 
    if n == '\n': 
        x = x + 1
if x > 0:
    print(string_1.replace('\n', ''))
else: 
    print(string_1)


