#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int chmod(int argc, char *argv[], struct file file, int mode){
    file.ip->perm = mode
    
}