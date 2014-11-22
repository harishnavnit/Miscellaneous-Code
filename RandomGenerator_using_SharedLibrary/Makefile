## Makefile to compile a program that uses shared objects
#***************************************************************#

# Specify the compiler and variables to control Makefile operations
CXX 		= gcc
CXXFLAGS 	= -c -Werror -fPIC
WALL 		= -Wall
SHARED 		= -shared
RPATH 		= -Wl, -rpath='/media/dennis/66b8b69c-684f-45c2-955a-54d30cd7aa6d/home/harish/Documents/Codes/Miscellaneous-Code/RandomGenerator_using_SharedLibrary/'
LINKFLAG 	= -L'/media/dennis/66b8b69c-684f-45c2-955a-54d30cd7aa6d/home/harish/Documents/Codes/Miscellaneous-Code/RandomGenerator_using_SharedLibrary/'
LINKER 		= -lrand

#***************************************************************#
# Position independent code compilation
generate.o : generate.c
	$(CXX) $(CXXFLAGS) $(WALL) generate.c

#***************************************************************#
#Create the shared library from the object file
librand.so : generate.o
	$(CXX) $(SHARED) -o librand.so generate.o

#***************************************************************#
# Setting the necessary environment variables and compiling with rpath
#random 	: librand.so main.c
#	$(CXX) $(LINKFLAG) $(RPATH) $(WALL) -o random main.c $(LINKER)

#***************************************************************#
# Using LD_LIBRARY_PATH to run the executble
random		: librand.so main.c
	$(CXX) $(LINKFLAG) $(WALL) -o random main.c $(LINKER)
