

# loops and interations

 #find number that divisble by 7 and 5 between 1500 to 2700
 # we start from 1500 then is this number div by 7 and multiple of 5 ?
 # if yes then print numb 
 # if no then move on to next number until 2700

n = 1500
print("These are all the numbers divisble by 7 and a multiple of 5")

for x in range(1500,2700) :
    if x%7 == 0 and x%5 == 0 : 
        print(x)


