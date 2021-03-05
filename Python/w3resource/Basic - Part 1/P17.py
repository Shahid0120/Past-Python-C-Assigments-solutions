
# input a number
# output is the number bewteen 100 and 1000 OR 1000 and 2000 

x = input("Enter a number ")

if x > 100:
    if x < 1000:
        if x < 2000: 
            print("This number is between 100 and 1000")
        else: 
            print("This number is between 1000 and 2000")
    elif x > 2000:   
        print("This number isnt inbetween 100 and 2000")
else: 
    print("This number is not between 100 and 2000")


