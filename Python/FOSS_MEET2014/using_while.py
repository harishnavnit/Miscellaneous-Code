#!/usr/bin/env python 

""" Program to demonstrates the use of while loop """

x = raw_input("Enter a number : ")

while x < 10 :
    if x > 7 :
        x += 2
        continue
    x += 1
    print "Still in the loop"
    if x==8 :
        break
    print "Outside of Loop"
