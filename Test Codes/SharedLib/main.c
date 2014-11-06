#include <stdio.h>
#include "foo.h"

int main(int argc, const char *argv[])
{
    printf("\nThis is a shared library\n");
    foo();
    return 0;
}
