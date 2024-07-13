#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    for (int i = 0; i < 3; ++i) {
        if (fork() == 0) {
            printf("Child PID: %d, Parent PID: %d\n", getpid(), getppid());
            exit(0);         
        }
    }

    for (int i = 0; i < 3; ++i) {
        wait(NULL);
    }

    printf("All children have terminated.\n");
    return 0;
}

