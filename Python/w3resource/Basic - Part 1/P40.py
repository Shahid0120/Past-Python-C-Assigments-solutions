

# Write a Python program to compute the distance between the points (x1, y1) and (x2, y2)

# input : enter two points
import math 
x1 = int(input("Enter x1 point: "))
x2 = int(input("Enter x2 point: "))

y1 = int(input("Enter y1 point: "))
y2 = int(input("Enter y2 point: "))

z = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
z = int(z)
print("The distacne between points ({},{}) and ({},{}) is {}".format(x1, y1, x2, y2, z))

