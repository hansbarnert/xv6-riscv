#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int ancestor)
{
    printf("Yo soy tu padre - dijo el proceso %d\n", getancestor(ancestor));
    exit(0);
}