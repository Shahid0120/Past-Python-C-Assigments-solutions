
#input: Gets a number n 
#output : Will x = n + 2*n + 3*n 
#prints out the result x 


a = int(input("Input an integer : "))
n = (a  + (a*10 + a)+ (a*100 + a*10 + a))
print("The Expected Result is: %i" %n)

