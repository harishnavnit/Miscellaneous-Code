#include <stdio.h>
#include "call.h"

int main(void) {
    puts("\nTesting the shared library to generate a random number\n");
    generate_random();
    return 0;
}
