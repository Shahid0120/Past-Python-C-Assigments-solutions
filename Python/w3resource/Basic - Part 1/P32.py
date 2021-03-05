

"""
Write a Python program to get the least common multiple (LCM) of two positive integers.
"""

x = input("Input one number: ")
y = input ("Input another number: ")


def gcd(x, y): 
    if x == 0:
        return y
    return gcd(y % x, y)

def lcm(x,y):
    return (x / gcd(x,y))* y

print("The LCM of and", x, "is", y, "is", lcm(x,y))