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
$ gcc -L/media/dennis/66b8b69c-684f-45c2-955a-54d30cd7aa6d/home/harish/Documents/Codes/Miscellaneous-Code/RandomGenerator_using_SharedLibrary -Wall -o random main.c -lrand

$ export LD_LIBRARY_PATH=/media/dennis/66b8b69c-684f-45c2-955a-54d30cd7aa6d/home/harish/Documents/Codes/Miscellaneous-Code/RandomGenerator_using_SharedLibrary:$LD_LIBRARY_PATH
```

## Run the executable
``` bash
$ ./random
```

## Unset the environment variables
``` bash
$ unset LD_LIBRARY_PATH
```
