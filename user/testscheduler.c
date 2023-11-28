#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
    // Number of child process
    int n = *argv[1];

    for(int i = 0; i < n; i++){
        if(fork_priority(i) < 0){
            printf("Error in fork\n");
            exit(1);
        }
        if(fork_priority(i) == 0){
            fork_priority(i);
            for(int j = 1; j <= 60; j++){
                printf("PID %d: %d\n", getpid(), j);
                sleep(1);

            }
            exit(0);
        }
        //wait(0);
    }
    exit(0);
}