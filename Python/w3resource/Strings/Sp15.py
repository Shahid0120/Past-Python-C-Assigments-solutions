
"""
Write a Python function to create the HTML string with tags around the word(s). Go to the editor
Sample function and result :
add_tags('i', 'Python') -> '<i>Python</i>'
add_tags('b', 'Python Tutorial') -> '<b>Python Tutorial </b>'

"""
"""
# input is a string 
# process convert it into a list and conver 
# ouutput prints the new 

list_1 = []
add_tags = ('i', 'Python')
# in the list index[0] = i/b index[1] = Name of the file 
# conver the tuple into a list 
x = 0
for n in add_tags:  
    list_1.append(add_tags[x])
    x = x + 1


# move list elemetns [0] and [1] into one index 

print(list_1)
"""

# above is all wrong

def add_tags(tag, word):
    return "<%s>%s</%s>" % (tag, word, tag)
print(add_tags('i', 'Python'))
print(add_tags('b', 'Python Tutorial'))