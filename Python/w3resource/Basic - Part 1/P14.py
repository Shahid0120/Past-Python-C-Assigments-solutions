

# input two different tpyes of dates 
# output the days inbetween those days

#assumption is that are not inputing the dates, the dates are already given

from datetime import date 

d0 = date(2014,7,18)
d1 = date(2014,9,12)
delta = d1 - d0
print(delta.days)


