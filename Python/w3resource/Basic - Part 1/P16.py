"""
Write a Python program to get the difference between a 
given number and 17, if the number is greater than 17 
return double the absolute difference.
"""

# so person inputs numbers 
# the if input > 17, (input - 17)x 2
# else input < 17,  (17 - input) 

x = input("Give a number: ")
x = int(x)
if x >= 17:
    n = 2 * (x - 17) 
    print("The Differecne of the numebr %i" %n)
elif x < 17:  
    n = 17 - x
    print("The Difference of the number %i" %n)