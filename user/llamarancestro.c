#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(int argc, char *argv[]) {
    if (argc>1) {
        int level = atoi(argv[1]);
        int pid = getancestor(level);
        if (pid > 0) {
            printf("Ancestro: %d\n", pid);
        } else {
            printf("Ancestro no existe (muy viejo)");
        }
    } else {
        printf("Uso: llamarancestro <numero>\n");
    }
exit(0);
}