#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
    pid_t pid;

    pid = fork();

    if(pid < 0) {
        fprintf(stderr, "\nFork failed\n");
        return EXIT_FAILURE;
    }
    else if(pid == 0){
        execlp("who", "who", NULL);
    }
    else {
        wait(NULL);
        printf("\nChild complete\n");
        exit(EXIT_SUCCESS);
    }
    return 0;
}
