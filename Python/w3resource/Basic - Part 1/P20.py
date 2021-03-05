

# INput is a nergative integer
# output prinbs coppied of hte integer i.e string

x = input("Enter a negative number: ")

if x <= 0:
    print("This is a negative number")
    n = 0
    while n <= 4:
        print(x)
        n = n + 1
else: 
    print("This is not a negative number")