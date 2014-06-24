#! usr/bin/env python

"""Program to implement a basic calculator in python"""

print "\n****************************Basic Calculator Menu*****************************"

print "1.Add \n2.Subtract \n3.Multiply \n4.Divide \n"
inp = raw_input("Enter the choice : ")

var1 = raw_input("Enter the first value : ")
var2 = raw_input("Enter the second value : ")

if inp == 1 :
    print "Sum = " print var1+var2

elif inp == 2 :
    print "Difference = " print var1-var2

elif inp == 3 :
    print "Product = " print var1*var2

elif inp == 4 :
    print "Quotient = " print var1/var2

else : 
    print "Invalid Choice ! Terminating "
