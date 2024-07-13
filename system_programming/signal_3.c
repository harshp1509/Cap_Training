#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main() {
    signal(SIGINT, SIG_IGN);

    printf("Process PID: %d\n", getpid());
    printf("Press Ctrl+C to try sending SIGINT (it will be ignored).\n");

    while (1) {
        sleep(1);
        printf("Still running...\n");
    }

    return 0;
}

