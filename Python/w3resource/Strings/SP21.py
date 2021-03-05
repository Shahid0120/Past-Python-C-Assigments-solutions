

"""
Write a Python function to convert a given string to 
all uppercase if it contains at least 2 uppercase characters in the first 4 characters.

"""
string_1 = input("Enter a string that contains more that four char/int/float: ")
# if not greater that four letters
if len(string_1) < 4:
    print("this String is not greater that 4 characters/integers/Floats")
else:
    # has more that 4 char/int/floats in string
    # find if it has more than 2 upper cases in the 4 characters
    k = 0
    for n in string_1[0:4]:
        if n.isupper() == True: 
            k = k + 1
    if k >= 2:
        print("The upper case version is %s" %string_1.upper())
    else: 
        print("This string does not contain more that 2 uppercase character in the first 4 letters")

