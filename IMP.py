

# he bagh , 1 second madhe 10 to power 8 operations hota maximum
#ani recursive algo 2to power50 cha asel max
import math

total_operations = pow(2,50) 
#1125899906842624

total_seconds = total_operations//pow(10,8)
#11258999 evdhe seconds hota 

total_days = total_seconds//(60*60*24)
print(total_days)

