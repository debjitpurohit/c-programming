#include <stdio.h>
#include <malloc.h>

int main()
{

    int *ptr;
    int n;
    scanf("%d",&n);
    //create a array dynamically//
    ptr = (int *)malloc(n * sizeof(int)); // use of this means that the integer not in stack it is in heap//
    ptr[0] = 45;
    ptr[1] = 46;
    ptr[2] = 47;
    ptr[3] = 48;
    printf("%d", ptr[2]);
    return 0;
}