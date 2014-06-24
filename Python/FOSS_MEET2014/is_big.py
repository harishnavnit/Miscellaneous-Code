#!/usr/bin/env python 

"""Program that asks for two numbers and prints 
    if it's a big number if the sum of the 
    numbers is greater than 100
"""

a = input("Enter First Number : ")
b = input("Enter Second Number : ")

if a+b>100 :
    print "This is a Big Number"

else :
    print "This is just an ordinary number"
