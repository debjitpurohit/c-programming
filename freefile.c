#include <stdio.h>
#include <malloc.h>

int main(){
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));
    ptr[0] = 45;
    ptr[1] = 46;
    ptr[2] = 47;
    ptr[3] = 48;
    printf("%d", ptr[2]);
    free(ptr); //memory of ptr released from malloc or calloc//
    return 0;
}