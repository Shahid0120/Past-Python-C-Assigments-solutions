

# input there is an existing list
# prints out only the third number from the list # revmoes that number from the list
 


Numbs = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '10']

n = 0 
for x in range(len(Numbs)):
    if n % 2 == 0 and n != 0:
        print(Numbs[x])
        Numbs.remove()
    n = n + 1


