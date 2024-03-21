#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int i;
    pid_t pid;
    char *args[] = {"ls", "-l", "/tmp", NULL};
    char *envp[] = {NULL};

    // Create 5 child processes
    for (i = 0; i < 5; i++) {
        pid = fork();
        if (pid == -1) {
            perror("fork failed");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            // Child process
            printf("Child process %d executing ls -l /tmp\n", getpid());
            if (execve("/bin/ls", args, envp) == -1) {
                perror("execve failed");
                exit(EXIT_FAILURE);
            }
        } else {
            // Parent process
            // Wait for the child to exit
            wait(NULL);
            printf("Child process %d exited\n", pid);
        }
    }

    return 0;
}
