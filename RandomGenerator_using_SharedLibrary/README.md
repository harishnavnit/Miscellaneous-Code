Creating a shared library
=========================

## Position independent code compilation
``` bash
$ gcc -c -Wall -Werror -fPIC generate.c
```
## Creating the shared library from the object file
``` bash
$ gcc -shared -o librand.so generate.o
```

## Setting necessary environment variables and compiling with path
``` bash
$ gcc -L/Path/to/your/shared/object -Wall -o random main.c -lrand

$ export LD_LIBRARY_PATH=/Path/to/your/shared/object:$LD_LIBRARY_PATH
```

## Run the executable
``` bash
$ ./random
```

## Unset the environment variables
``` bash
$ unset LD_LIBRARY_PATH
```

Using the Makefile
===================
Use the make command as shown below.
``` bash
$ make random
```
Update the LD_LIBRARY_PATH variable
``` bash
$ export LD_LIBRARY_PATH=/Path/to/your/shared/object:$LD_LIBRARY_PATH
```
Now, run the executable generated
``` bash
$ ./random
```
