#include <stdio.h>

int main(){
    int i=5;
    int *ptr=&i;// *ptr takes the value of i and ptr become 5
    printf("the value of i is %d\n",i); // for every ptr++ the adress of ptr increased by 4
    printf("the address of ptr is %u\n",ptr);
    printf("the adress of i is %u \n",&i);
   // ptr++; // ptr=ptr+1 ....ptr increase by 4 bytes
   // printf("the value of i is %d\n",i);
   // printf("the address of ptr after ptr is incremented is %u\n",ptr);
   // printf("the adress of i after ptr is incremented is %u \n",&i);
   // i++;
   // printf("the value of i is %d\n",i);
   // printf("the address of ptr after i is incremented is %u\n",ptr);
   // printf("the adress of i after i is incremented is %u \n",&i);
   //ptr=ptr-2; // ptr adres decreassed by 8
   // printf("the address of ptr after ptr is decremented is %u\n",ptr);
    ptr=ptr+2; //ptr=5+2=7
    printf("the address of ptr after ptr is inccremented is %u \n",ptr); //&ptr[0]=ptr
    printf("the adress of i after ptr is incremented is %u \n",&i);
    printf("the address of ptr after ptr is inccremented is %u\n",ptr-&i); // not show the actual difference between {8} ptr and i ,,,, it show the actualdifference/4bytes
    if (ptr>&i)
    {
        printf("ptr is greater");
    }
    else{
        printf("ptr is not grater");
    }
    
   return 0;
}