#include <stdio.h>
#include <signal.h>
#include <unistd.h>
 
// Signal handler function for SIGINT and SIGTERM
void sigint_sigterm_handler(int signum) {
    if (signum == SIGINT) {
        printf("\nCustom message: SIGINT received. Continuing execution...\n");
        // Handle SIGINT as needed (e.g., set a flag)
    } else if (signum == SIGTERM) {
        printf("\nCustom message: SIGTERM received. Terminating program...\n");
        // Clean up resources if needed before termination
        _exit(0);  // Terminate the program
    }
}
 
int main() {
    // Register sigint_sigterm_handler as the handler for SIGINT and SIGTERM
    signal(SIGINT, sigint_sigterm_handler);
    signal(SIGTERM, sigint_sigterm_handler);
 
    // Example: Program continues running
    printf("Press Ctrl+C to trigger SIGINT or send SIGTERM (SIGINT will be caught).\n");
 
    // Simulate a long-running process
    while (1) {
        // Do some work or just sleep
        sleep(1);
    }
 
    return 0;
}
