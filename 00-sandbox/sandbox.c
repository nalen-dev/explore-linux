#include <stdio.h>
#include <unistd.h>
#include "test.h"

int main(int argc, char *argv[]){
    printf("first arg: %s\n", argv[0]);
    printf("second arg: %s\n", argv[1]);    
    
    printf("Real UUID: %d\n", getuid());
    printf("EFective UUID: %d\n", geteuid());
    return 0;
}