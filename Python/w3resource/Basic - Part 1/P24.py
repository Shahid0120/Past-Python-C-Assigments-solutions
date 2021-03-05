

#input there is a list of letter
#process checks wearther there is vowel or not a vowel 
# outputs says how many vowel there is and how many constanatns there is in the list

x = ['U', 'V', 'I', 'B', 'T', 'R']
n = 0
k = 0 
if "A" or "E" or "I" or "O" or "U" in x:
    n = n + 1
else:
    k = k + 1 

f = len(x)
print("In a list of %i length " %f)
print("There is %i vowels" %n)
print("There is %i constanants" %k)