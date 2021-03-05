
def character_finder(string_1, x):
    k = 0;
    for n in string_1:
        if n == string_1[x]:
            k = k + 1
    if k > 1:
        return k
    else:
        return 0  


# input enter a string
string_2 = []
string_1 = input("Enter a string without any spaces: ")

if string_1 == ' ':
    print("This String contains a space:")
else: 
    x = 0 
    for n in string_1: 
        character_finder(string_1, x)
        if character_finder(string_1, x) > 1:
            y = 0
            z = 0
            for n in string_2:
                if n == string_2[y]:
                    z = z + 1
                    print("Poop")
                y = y + 1
            if z <= 0:
                print("{} {}".format(n, character_finder(string_1,x)))
                string_2.append(n)
        x = x + 1
  
