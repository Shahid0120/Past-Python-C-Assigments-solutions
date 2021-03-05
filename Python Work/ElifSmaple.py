
#elif samepl program 

x = input("Type in a number:  ")
#some reason it not working sing i tried using a function?? Not sure what do to
def Numb() :
    try :
        x = int(x)
        if x > 2 :
            print("Your number is greater than 2")
        elif x < 2 :
            print("Your number is less than 2")
        elif x == 2 :
            print("OMG your number is 2")
    except :
        print("This ant no numboo")

Numb()


