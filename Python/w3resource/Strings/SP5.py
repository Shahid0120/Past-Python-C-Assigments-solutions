

"""
Write a Python program to get a single string from two given strings,
separated by a space and swap the first two characters of each string. 
Go to the editor
Sample String : 'abc', 'xyz'
Expected Result : 'xyc abz'


"""

# input two strings seperates
# make string into one string with a space
# output print the string

def New_words(x, y):
    new_letter_a = y[:2] + x[2:]
    new_letter_b = x[:2] + y[2:]
    return new_letter_a + ' '+ new_letter_b

print(New_words('abc', 'xyz'))