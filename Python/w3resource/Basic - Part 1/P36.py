
#  Write a Python program to add two objects if both objects are an integer type.

# input check weather both are interger 
# process add the two values
# prints out the sum of the two values


def add_numbers(a, b):
    if not (isinstance(a, int) and isinstance(b, int)):
         raise TypeError("Inputs must be integers")
    return a + b

print(add_numbers(10, 20))
